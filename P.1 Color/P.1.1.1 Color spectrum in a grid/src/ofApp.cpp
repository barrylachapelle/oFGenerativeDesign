#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //bg color
    ofColor bgcolor = ofColor(0);
    bgcolor.setHsb(ofMap(mouseY, 0, 720, 0, 255), 175, 175);
    ofBackground(bgcolor);
    
    //square
    ofColor sqcolor = ofColor(0);
    sqcolor.setHsb(ofMap(mouseY, 0, 720, 255, 0), 175, 175);
    ofSetColor(sqcolor);
    ofDrawRectangle(ofGetWidth()/2-mouseX/2, ofGetHeight()/2-mouseX/2, mouseX, mouseX);
    
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
