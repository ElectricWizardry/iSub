//
//  EqualizerPointView.h
//  iSub
//
//  Created by Ben Baron on 11/19/11.
//  Copyright (c) 2011 Ben Baron. All rights reserved.
//

#import "bass.h"
#import "BassParamEqValue.h"

@class BassParamEqValue;
@interface EqualizerPointView : UIImageView
{
	BassParamEqValue *eqValue;
}

@property (retain) BassParamEqValue *eqValue;
@property (readonly) NSUInteger frequency;
@property (readonly) CGFloat gain;
@property (readonly) HFX handle;
@property CGPoint position;

@property CGSize parentSize;

- (id)initWithCGPoint:(CGPoint)point parentSize:(CGSize)size;
- (id)initWithEqValue:(BassParamEqValue *)value parentSize:(CGSize)size;

- (CGFloat)percentXFromFrequency:(NSUInteger)frequency;
- (CGFloat)percentYFromGain:(CGFloat)gain;

@end
