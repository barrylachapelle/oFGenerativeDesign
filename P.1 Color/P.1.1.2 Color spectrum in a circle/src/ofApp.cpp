#include "ofApp.h"

ofVec2f p1;
ofVec2f p2;
ofVec2f p3;

int segmentCount;
int radius;

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);
    segmentCount = 120;
    radius = 340;

}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofColor tricolor = ofColor(0);

    float angleStep = 360 / segmentCount;

    for(int angle = 0; angle < 360; angle+=angleStep){
        
        
        //map color from 360 > 255
        tricolor.setHsb(ofMap(angle, 0, 360, 0, 255), 200, 200);
        ofSetColor(tricolor);
        
        //set x,y for tri pts
        p1.x = ofGetWidth()/2;
        p1.y = ofGetHeight()/2;
        p2.x = ofGetWidth()/2 + cos(ofDegToRad(angle)) * radius;
        p2.y = ofGetHeight()/2 + sin(ofDegToRad(angle)) * radius;
        p3.x = ofGetWidth()/2 + cos(ofDegToRad(angle+angleStep)) * radius;
        p3.y = ofGetHeight()/2 + sin(ofDegToRad(angle+angleStep)) * radius;
        
        //draw
        ofDrawTriangle(p1, p2, p3);
        
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    switch(key){
        
        case '1':
            segmentCount = 360;
            break;
        case '2':
            segmentCount = 45;
            break;
        case '3':
            segmentCount = 24;
            break;
        case '4':
            segmentCount = 12;
            break;
        case '5':
            segmentCount = 6;
            break;
    }

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
