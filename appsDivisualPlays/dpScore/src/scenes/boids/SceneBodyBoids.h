#pragma once
#include "dpScoreSceneBase.h"
#include "ParticleController.h"
#include "ofxMotioner.h"

DP_SCORE_NAMESPACE_BEGIN

class SceneBodyBoids final : public SceneBase {
public:
    explicit SceneBodyBoids() = default;
    virtual ~SceneBodyBoids() = default;
    
    void initialize() override;
    void shutDown() override;
    
    void enter() override;
    void exit() override;
    
    void update(ofxEventMessage& m) override;
    void draw() override;
    
    void onUpdateSkeleton(ofxMotioner::EventArgs &e);
    
private:
    void randomizeCamera();
    
	ParticleController mParticleController;
    float mZoneRadius{100.f};
    float mLowerThresh{0.5f};
    float mHigherThresh{0.8f};
    float mAttractStrength{0.001f};
    float mRepelStrength{0.01f};
    float mOrientStrength{0.01f};
    float mEnterTime{0.f};
    float mPointSize{2.f};
    float mSpd{0.f};
    
    bool mCentralGravity{true};
    bool mFlatten{false};
    
    ofVec3f mEuler;
    
    bool  mShowPoint;
    
    ofxMot::SkeletonPtr mActor;
    ofxMot::SkeletonPtr mPrevActor;
    ofEasyCam mCam;
    string mSkeletonName{""};

};

DP_SCORE_NAMESPACE_END