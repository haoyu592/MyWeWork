//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDrawRect.h"

@class UIColor, UIImage;

@interface MDrawMosiac : MDrawRect
{
    _Bool _mIsDrawUp;
    UIColor *_maskBorderColor;
    UIImage *_masciImage;
}

@property(retain, nonatomic) UIImage *masciImage; // @synthesize masciImage=_masciImage;
- (void).cxx_destruct;
- (void)drawMosiacContent:(struct CGContext *)arg1 withFilledColor:(id)arg2 inRect:(struct CGRect)arg3;
- (void)drawUp:(struct CGPoint)arg1;
- (void)drawDown:(struct CGPoint)arg1;
- (void)drawSlectedStateContent:(struct CGContext *)arg1;
- (void)drawContent:(struct CGContext *)arg1;
- (_Bool)testHitOnHandle:(struct CGPoint)arg1;
- (_Bool)hitOnHandle:(struct CGPoint)arg1;
- (_Bool)hitTest:(struct CGPoint)arg1;
- (void)setColor:(id)arg1;
- (id)initWithStartPoint:(struct CGPoint)arg1;
- (id)init;

@end
