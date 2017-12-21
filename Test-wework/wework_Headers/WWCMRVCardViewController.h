//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIImage, UITableView, WWCMROCRVCardInfo, WWCMRVCardTopBar;
@protocol WWCMRVCardViewControllerProtocol;

@interface WWCMRVCardViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <WWCMRVCardViewControllerProtocol> _ctrlrDelegate;
    WWCMRVCardTopBar *_topBar;
    UITableView *_vcardTableView;
    WWCMROCRVCardInfo *_vcardInfo;
    UIImage *_srcImg;
    NSArray *_secArr;
}

@property(retain, nonatomic) NSArray *secArr; // @synthesize secArr=_secArr;
@property(retain, nonatomic) UIImage *srcImg; // @synthesize srcImg=_srcImg;
@property(retain, nonatomic) WWCMROCRVCardInfo *vcardInfo; // @synthesize vcardInfo=_vcardInfo;
@property(retain, nonatomic) UITableView *vcardTableView; // @synthesize vcardTableView=_vcardTableView;
@property(retain, nonatomic) WWCMRVCardTopBar *topBar; // @synthesize topBar=_topBar;
@property(nonatomic) __weak id <WWCMRVCardViewControllerProtocol> ctrlrDelegate; // @synthesize ctrlrDelegate=_ctrlrDelegate;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)p_cellReuseStrForSec:(long long)arg1 row:(long long)arg2;
- (void)p_configTextCell:(id)arg1 WithInfo:(id)arg2;
- (void)p_configImgCell:(id)arg1;
- (void)p_configCell:(id)arg1 AtSec:(long long)arg2 row:(long long)arg3;
- (id)p_createCellAtSec:(long long)arg1 row:(long long)arg2 reuseStr:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)p_vcardContentStrAtSecID:(unsigned long long)arg1 rowInSec:(long long)arg2;
- (long long)p_numberOfRowForSecID:(unsigned long long)arg1;
- (unsigned long long)p_secIDAtSection:(long long)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)p_initUI;
- (void)viewDidLoad;
- (void)p_updateSectionArr;
- (void)p_updateTable;
- (void)p_initLogic;
- (id)initWithVCardInfo:(id)arg1 sourceImg:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
