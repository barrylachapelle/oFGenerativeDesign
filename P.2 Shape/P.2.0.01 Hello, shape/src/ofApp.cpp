#include "ofApp.h"



ofPath line;
int circleResolution;


//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    line.clear();
    
    ofColor color = ofColor(250);
    ofSetColor(color);
    
    circleResolution = ofMap(mouseY, 0, ofGetHeight(), 3, 60);
    float radius = mouseX-ofGetWidth()/2 + 0.5;
    float angle = TWO_PI/circleResolution;
    
    ofSetCircleResolution(circleResolution);
    //ofDrawCircle(ofGetWidth()/2,ofGetHeight()/2, 350);
    
    for(int i = 0; i < circleResolution; i++){
       
        float x = cos(angle*i) * radius;
        float y = sin(angle*i) * radius;
        
        line.moveTo(ofGetWidth()/2,ofGetHeight()/2);
        line.lineTo(x + ofGetWidth()/2 , y + ofGetHeight()/2);
        line.setStrokeColor(ofColor::black);
        line.setStrokeWidth(ofMap(mouseY, 0, ofGetHeight(), 1, 20));
        line.draw();
        
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    
    switch(key){
            
        case '1':
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
            break;
        case '5':
            break;
    }

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
