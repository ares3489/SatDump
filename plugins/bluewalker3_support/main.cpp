#include "core/plugin.h"
#include "logger.h"
#include "core/module.h"
#include "module_bw3_decoder.h"

class BlueWalker3Support : public satdump::Plugin
{
public:
    std::string getID()
    {
        return "bluewalker3_support";
    }

    void init()
    {
        satdump::eventBus->register_handler<RegisterModulesEvent>(registerPluginsHandler);
    }

    static void registerPluginsHandler(const RegisterModulesEvent &evt)
    {
        REGISTER_MODULE_EXTERNAL(evt.modules_registry, bluewalker3::BW3DecoderModule);
    }
};

PLUGIN_LOADER(BlueWalker3Support)