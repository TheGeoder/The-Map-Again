#include <Geode/Bindings.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    void onMoreGames(CCObject* sender) {
        FLAlertLayer::create(
            "The Map",
            "The Map mod is loaded!",
            "OK"
        )->show();
    }
};
