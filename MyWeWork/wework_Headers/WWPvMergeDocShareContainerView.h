//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SwipeViewDataSource-Protocol.h"
#import "SwipeViewDelegate-Protocol.h"
#import "WWMultiMarkupViewDelegate-Protocol.h"
#import "WWPvDocShareCtrlPannelDelegate-Protocol.h"
#import "WWShareDocViewerDataSource-Protocol.h"
#import "WWShareDocViewerDelegate-Protocol.h"
#import "WXCZoomingImageViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, SwipeView, WWMultiMarkupView, WWPvDocShareCtrlPannel, WWShareDocViewer;
@protocol WWPvMergeDocShareContainerViewDelegate;

@interface WWPvMergeDocShareContainerView : UIView <WWPvDocShareCtrlPannelDelegate, WWMultiMarkupViewDelegate, WXCZoomingImageViewDelegate, SwipeViewDataSource, SwipeViewDelegate, WWShareDocViewerDelegate, WWShareDocViewerDataSource>
{
    _Bool _mIsSharing;
    _Bool _mIsSelfShare;
    int _mCurrentSharePage;
    int _mTotalPageCnt;
    int _mLastPreDownLoadPage;
    id <WWPvMergeDocShareContainerViewDelegate> _delegate;
    WWPvDocShareCtrlPannel *_mCtrlPannel;
    WWMultiMarkupView *_mMarkupView;
    NSString *_mShareTopic;
    NSDictionary *_mDicPicsInfo;
    double _mCurrentOriginalScale;
    SwipeView *_mSwipContainer;
    WWShareDocViewer *_mShareDocViewer;
    NSMutableArray *_mDocUrlList;
    struct CGPoint _mCurrentContentOffset;
}

@property(nonatomic) int mLastPreDownLoadPage; // @synthesize mLastPreDownLoadPage=_mLastPreDownLoadPage;
@property(retain, nonatomic) NSMutableArray *mDocUrlList; // @synthesize mDocUrlList=_mDocUrlList;
@property(retain, nonatomic) WWShareDocViewer *mShareDocViewer; // @synthesize mShareDocViewer=_mShareDocViewer;
@property(nonatomic) struct CGPoint mCurrentContentOffset; // @synthesize mCurrentContentOffset=_mCurrentContentOffset;
@property(retain, nonatomic) SwipeView *mSwipContainer; // @synthesize mSwipContainer=_mSwipContainer;
@property(nonatomic) double mCurrentOriginalScale; // @synthesize mCurrentOriginalScale=_mCurrentOriginalScale;
@property(nonatomic) int mTotalPageCnt; // @synthesize mTotalPageCnt=_mTotalPageCnt;
@property(nonatomic) int mCurrentSharePage; // @synthesize mCurrentSharePage=_mCurrentSharePage;
@property(nonatomic) _Bool mIsSelfShare; // @synthesize mIsSelfShare=_mIsSelfShare;
@property(retain, nonatomic) NSDictionary *mDicPicsInfo; // @synthesize mDicPicsInfo=_mDicPicsInfo;
@property(copy, nonatomic) NSString *mShareTopic; // @synthesize mShareTopic=_mShareTopic;
@property(nonatomic) _Bool mIsSharing; // @synthesize mIsSharing=_mIsSharing;
@property(retain, nonatomic) WWMultiMarkupView *mMarkupView; // @synthesize mMarkupView=_mMarkupView;
@property(retain, nonatomic) WWPvDocShareCtrlPannel *mCtrlPannel; // @synthesize mCtrlPannel=_mCtrlPannel;
@property(nonatomic) __weak id <WWPvMergeDocShareContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleSingleTap;
- (void)handleGesture:(id)arg1;
- (void)shareDocViewerCurrentItemIndexDidChange:(id)arg1;
- (id)shareDocViewer:(id)arg1 viewForItemAtIndex:(long long)arg2 reuseView:(id)arg3;
- (long long)numberOfItemsInShareDocViewer:(id)arg1;
- (void)swipeViewDidEndDecelerating:(id)arg1;
- (void)swipeViewCurrentItemIndexDidChange:(id)arg1;
- (struct CGSize)swipeViewItemSize:(id)arg1;
- (void)swipeViewDidScroll:(id)arg1;
- (id)swipeView:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)numberOfItemsInSwipeView:(id)arg1;
- (struct CGPoint)p_MarkupPointFromImgPoint:(struct CGPoint)arg1;
- (struct CGPoint)p_ImgPointFromMarkupPoint:(struct CGPoint)arg1;
- (void)p_calculateMapRelationshipAndSendResultStart:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 drawCompleted:(_Bool)arg3;
- (void)didLineChanged:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 drawCompleted:(_Bool)arg3;
- (void)didScaleChanged:(int)arg1 yPos:(int)arg2 scale:(int)arg3;
- (void)check2ResumeEditState;
- (void)p_doEditStateUpdate:(_Bool)arg1;
- (void)didEditBtnClickedFromEditState:(_Bool)arg1;
- (void)didHomePgBtnClicked;
- (void)didNextPgBtnClicked;
- (void)didLastPgBtnClicked;
- (void)p_notifyPageChanged;
- (void)p_updateDocContainerScrollEnable:(_Bool)arg1;
- (struct CGRect)p_getDocContainerBounds;
- (void)p_reloadContainerData;
- (void)p_updateDocContainerCurrentPage;
- (_Bool)checkShouldUpdateDocContainerCurrentPage;
- (id)getCurrentViewInContainer;
- (void)p_clearDocMemoryCache;
- (void)p_cacheDocUrl:(id)arg1;
- (void)p_clearContainerData;
- (void)updateTimeLabel:(id)arg1;
- (void)showCtrlPannel;
- (void)hideCtrlPannel;
- (void)reloadIfNeed;
- (_Bool)isViewShow;
- (void)showView;
- (void)hideView;
- (void)onPeerDrawLineOnPage:(int)arg1 start:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3 drawCompleted:(_Bool)arg4 opUuid:(int)arg5;
- (void)onPeerMoveToX:(int)arg1 yPos:(int)arg2 scale:(int)arg3;
- (void)onPeerLocatePage:(int)arg1 forceChange:(_Bool)arg2;
- (int)currentSharePage;
- (_Bool)isSelfShare;
- (_Bool)isSharingStatus;
- (void)endSharing;
- (void)startSharing:(id)arg1 bIsSelfShare:(_Bool)arg2 shareOwnerName:(id)arg3 shareTopic:(id)arg4;
- (struct CGRect)getMarkViewFrame:(id)arg1;
- (void)checkAndCorrectMarkViewFrame:(id)arg1;
- (struct CGRect)p_aquireZoomViewRect;
- (void)layoutSubviews;
- (void)p_didSingleTaped;
- (void)p_updateUI;
- (void)p_refreshImgPositionAndZoomScale:(id)arg1;
- (id)zoomingImgViewHitTestView:(id)arg1;
- (void)zoomingImgViewDidScroll:(id)arg1 toBound:(long long)arg2;
- (void)zoomingImgViewDidEndScroll:(id)arg1;
- (void)zoomingImgViewDidEndZoom:(id)arg1;
- (void)zoomingImgViewWillBeginZoom:(id)arg1;
- (void)singleTouchInZoomingImageView:(id)arg1;
- (void)didRenderImageInZoomingImageView:(id)arg1 image:(id)arg2;
- (id)genDocItemView;
- (void)p_initMarkView;
- (void)p_initDocContainer;
- (void)p_initCtrPanel;
- (void)p_initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
