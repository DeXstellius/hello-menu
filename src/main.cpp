
#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(HelloMenu, MenuLayer) {
    bool init() {
        if (!MenuLayer::init())
            return false;

        auto label = CCLabelBMFont::create(
            "Hello from Android!",
            "goldFont.fnt"
        );

        auto size = CCDirector::sharedDirector()
            ->getWinSize();

        label->setPosition({
            size.width / 2,
            35.f
        });

        label->setScale(0.5f);
        this->addChild(label, 100);

        return true;
    }
};
