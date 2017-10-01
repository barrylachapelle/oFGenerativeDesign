#include "ofApp.h"

ofImage img;
vector<ofColor> colors;
string sortMode = "";

//--------------------------------------------------------------
void ofApp::setup(){
    
    img.load("image.jpg");
    
    //get pixel colors from image and add to vector
    for (int gridY = 0; gridY < ofGetHeight(); gridY++) {
        for (int gridX = 0; gridX < ofGetWidth(); gridX++) {
            
            //convert from rgb to hsb
            ofColor pixelcolor = img.getColor(gridX, gridY);
            colors.push_back(pixelcolor);
        }
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    
}


//--------------------------------------------------------------
bool sorter(const ofColor &c1, const ofColor &c2) {
    
    if(sortMode == "hsb"){
        return c1.r < c2.r;
    }else if(sortMode == "hue"){
        return c1.getHue() < c2.getHue();
    }else if(sortMode == "saturation"){
        return c1.getSaturation() < c2.getSaturation();
    }else if(sortMode == "brightness"){
        return c1.getBrightness() < c2.getBrightness();
    }
    
}


//--------------------------------------------------------------
void ofApp::draw(){
    
    if(sortMode == ""){
        
        //draw img if no sort is chosen
        ofSetColor(255);
        img.draw(0,0);
        
    }else{
        
        //sort
        std::sort(colors.begin(), colors.end(), sorter);
        
        //draw sorted grid
        int i = 0;
        for (int gridY = 0; gridY < ofGetHeight(); gridY++) {
            for (int gridX = 0; gridX < ofGetWidth(); gridX++) {
                
                ofColor pixelcolor = colors[i];
                ofSetColor(pixelcolor);
                ofDrawRectangle(gridX, gridY, 1, 1);
                i++;
                
            }
        }
        
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    switch(key){
            
        case '1':
            sortMode = "";
            break;
        case '2':
            sortMode = "hsb";
            break;
        case '3':
            sortMode = "hue";
            break;
        case '4':
            sortMode = "saturation";
            break;
        case '5':
            sortMode = "brightness";
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
