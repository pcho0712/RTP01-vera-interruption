#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    ofSetWindowShape(800, 800);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);

    ofSeedRandom(ofGetMouseX()*10000);
    ofSetColor(0);
    
    for(int i=0;i<60;i++){
        for(int j=0;j<50;j++){
            float x = ofMap(i,0,59,50,750);
            float y = ofMap(j,0,49,50,750);
            ofPushMatrix();
            ofTranslate(x,y);
            
            //vertically-oriented lines.
            double angSeed = ofRandom(-1.0,1.0);
            if(pow(abs(angSeed),1.5)>ofRandom(0,1)) angSeed = ofRandom(-1,1);
            ofRotateZRad(PI/2*angSeed+PI/2);
            
            //randomly-removed
            double pX = ofGetMouseX()/50.;//phaseSeed
            double pY = ofGetMouseY()/50.;//phaseSeed
            if(ofNoise(i*0.15+pX,j*0.15+pY)+ofNoise(i*0.02+pX,j*0.02+pY)<1.55){
                ofDrawLine(-13,0,13,0);
            }else{
                ;
            }
            ofPopMatrix();

        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
