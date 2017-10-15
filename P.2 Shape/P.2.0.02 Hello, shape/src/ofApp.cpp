#include "ofApp.h"

ofPath line;

//--------------------------------------------------------------
void ofApp::setup(){
    
    //white bg
    ofBackground(ofColor::royalBlue);
    
    //no bg refresh
    ofSetBackgroundAuto(false);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    line.clear();

    int circleResolution = ofMap(mouseY, 0, ofGetHeight(), 3, 12);
    float radius = mouseX-ofGetWidth()/2 + 0.5;
    float angle = TWO_PI/circleResolution;
    
    ofSetCircleResolution(circleResolution);
    //ofDrawCircle(ofGetWidth()/2,ofGetHeight()/2, 350);
    
    for(int i = 0; i < circleResolution + 1; i++){

        //if(circleResolution > 2){
            
            float x = cos(angle*i) * radius;
            float y = sin(angle*i) * radius;
            
            line.lineTo(x + ofGetWidth()/2 , y + ofGetHeight()/2);
            line.setFilled(false);
            line.setStrokeColor(ofColor::peachPuff);
            line.setStrokeWidth(ofMap(mouseY, 0, ofGetHeight(), 0.2, 0.8));
            line.draw();
            
        //}
        
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    switch(key){
            
        case '1':
            line.clear();
            ofBackground(ofColor::royalBlue);
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
