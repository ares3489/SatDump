#include "core/plugin.h"
#include "logger.h"
#include "core/module.h"

#include "dmsp/module_dmsp_rtd_decoder.h"
#include "dmsp/module_dmsp_rtd_instruments.h"

class DMSPSupport : public satdump::Plugin
{
public:
    std::string getID()
    {
        return "dmsp_support";
    }

    void init()
    {
        satdump::eventBus->register_handler<RegisterModulesEvent>(registerPluginsHandler);
    }

    static void registerPluginsHandler(const RegisterModulesEvent &evt)
    {
        REGISTER_MODULE_EXTERNAL(evt.modules_registry, dmsp::DMSPRTDDecoderModule);
        REGISTER_MODULE_EXTERNAL(evt.modules_registry, dmsp::DMSPInstrumentsModule);
    }
};

PLUGIN_LOADER(DMSPSupport)