//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDrawRect.h"

#import "UITextViewDelegate-Protocol.h"

@class MDrawTextView, NSString, UIView;
@protocol MDrawTextDelegate;

@interface MDrawText : MDrawRect <UITextViewDelegate>
{
    UIView *_superView;
    NSString *_preText;
    _Bool _isEdittingText;
    MDrawTextView *_textView;
    double _curKeyboardHeight;
    id <MDrawTextDelegate> _delegate;
    double _fontSize;
}

+ (struct __CTFont *)ctFontRefFromUIFont:(id)arg1;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) __weak id <MDrawTextDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isEdittingText; // @synthesize isEdittingText=_isEdittingText;
@property(nonatomic) double curKeyboardHeight; // @synthesize curKeyboardHeight=_curKeyboardHeight;
@property(retain, nonatomic) MDrawTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (id)getFeature;
- (void)setFeature:(id)arg1;
- (_Bool)isSupportGestureRotate;
- (id)getTextFont;
- (id)getTextAttributes;
- (struct CGSize)getCTLineSize:(struct __CTLine *)arg1;
- (struct CGSize)measureFrame:(struct __CTFrame *)arg1;
- (struct CGSize)measureCoreTextSize:(id)arg1;
- (void)updateFrameWhenChangeLineWidth;
- (double)getRectAdjustForLineWidth;
- (void)updateEndPoint;
- (void)reCalcStartAndEndPoint;
- (void)updateTextViewSuitableFrame;
- (struct CGPoint)invertRotatePoint:(struct CGPoint)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinate:(_Bool)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinate:(_Bool)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 toCoordinate:(_Bool)arg2;
- (struct CGAffineTransform)getCurrentContextTransform;
- (double)getCurrentCtxScale;
- (struct CGRect)getCurrentCtxRect;
- (double)getMinTextViewHeight;
- (id)getMaskColor;
- (void)textViewDidChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)unregistKeyboardNotification;
- (void)registKeyboardNotification;
- (_Bool)hitOnHandle:(struct CGPoint)arg1;
- (_Bool)testHitOnHandle:(struct CGPoint)arg1;
- (_Bool)hitTest:(struct CGPoint)arg1;
- (void)drawText:(struct CGContext *)arg1 withString:(id)arg2;
- (struct CGRect)reSetFont:(id)arg1;
- (void)drawContentHandle:(struct CGContext *)arg1;
- (void)drawEdittingTextHandle:(struct CGContext *)arg1;
- (void)drawSlectedStateContent:(struct CGContext *)arg1;
- (void)drawContent:(struct CGContext *)arg1;
- (void)moveByOffset:(struct CGSize)arg1 endPoint:(struct CGPoint)arg2;
- (void)drawUp:(struct CGPoint)arg1;
- (void)drawMove:(struct CGPoint)arg1;
- (_Bool)hasTextChanged;
- (void)stopEdittingText;
- (void)startEdittingText;
- (void)finalize;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (void)setDrawType:(unsigned long long)arg1;
- (void)limitValidFeatrue;
- (_Bool)isDrawVaild;
- (void)dealloc;
- (id)initWithView:(id)arg1 startPoint:(struct CGPoint)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
