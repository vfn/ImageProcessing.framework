/*
 * ImageProcessing.framework for iOS
 * Sample APP-1(Live view processing)
 * cameraViewController.h
 *
 * Copyright (c) Yusuke Sekikawa, 11/06/02
 * All rights reserved.
 * 
 * BSD License
 *
 * Redistribution and use in source and binary forms, with or without modification, are 
 * permitted provided that the following conditions are met:
 * - Redistributions of source code must retain the above copyright notice, this list of
 *  conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright notice, this list
 *  of conditions and the following disclaimer in the documentation and/or other materia
 * ls provided with the distribution.
 * - Neither the name of the "Yuichi Yoshida" nor the names of its contributors may be u
 * sed to endorse or promote products derived from this software without specific prior 
 * written permission.
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY E
 * XPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES O
 * F MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SH
 * ALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENT
 * AL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROC
 * UREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS I
 * NTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRI
 * CT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF T
 * HE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#import <UIKit/UIKit.h>

#import <AssetsLibrary/ALAssetsLibrary.h>
#import <AVFoundation/AVFoundation.h>
#import <ImageIO/ImageIO.h>
#import <QuartzCore/QuartzCore.h>
<<<<<<< HEAD
#import "markerLayer.h"
=======
<<<<<<< HEAD
#import "markerLayer.h"
=======
<<<<<<< HEAD
#import "markerLayer.h"
=======

>>>>>>> 6b3149e71160485a21af43630cb6366a63ac8ccb
>>>>>>> c77b0b452ca96cc8eb26b0db7bae3b900d481759
>>>>>>> fb64a569f77f9873fcf1811d4ac04b499c6d2be5

#define TYPE_1  0x00000001
#define TYPE_2  0x00000002

@interface cameraViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate> {
    AVCaptureSession *_session;
    IBOutlet UIImageView *liveView;
    IBOutlet UISegmentedControl *eTypeSeg;  
    void *_filteredImageBuffer;
    void *_shadingData;
    size_t _filteredImageBufferSize;
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> c77b0b452ca96cc8eb26b0db7bae3b900d481759
>>>>>>> fb64a569f77f9873fcf1811d4ac04b499c6d2be5
    
    markerLayer *_markerLayre;
    AVCaptureVideoPreviewLayer *_prevLayer;
}
@property (retain) AVCaptureSession *_session;
@property (nonatomic,retain) AVCaptureVideoPreviewLayer *_prevLayer;
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
=======
}
@property (retain) AVCaptureSession *_session;
>>>>>>> 6b3149e71160485a21af43630cb6366a63ac8ccb
>>>>>>> c77b0b452ca96cc8eb26b0db7bae3b900d481759
>>>>>>> fb64a569f77f9873fcf1811d4ac04b499c6d2be5

@end
