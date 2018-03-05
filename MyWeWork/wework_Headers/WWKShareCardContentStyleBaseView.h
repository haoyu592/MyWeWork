//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSNumber, UIButton, UIImageView, UILabel;

@interface WWKShareCardContentStyleBaseView : UIView
{
    UIButton *_cornerRoundBackGroundView;
    UILabel *_companyNameLabel;
    UILabel *_nameLabel;
    UILabel *_jobLabel;
    UILabel *_mobileLabel;
    UILabel *_emailLabel;
    UILabel *_companyAddressLabel;
    UIImageView *_qrImageView;
    NSNumber *_overridePrivacyMobile;
    NSNumber *_overridePrivacyMail;
    NSNumber *_overridePrivacyJob;
    NSArray *_layoutFor3_5;
    NSArray *_layoutFor4;
    NSArray *_layoutFor4_7;
    NSArray *_layoutFor5_5;
    NSLayoutConstraint *_qrcodeCollapseConstraint;
    NSLayoutConstraint *_jobCollapseConstraint;
    NSLayoutConstraint *_mobileCollapseConstraint;
    NSLayoutConstraint *_emailCollapseConstraint;
    NSLayoutConstraint *_addressCollapseConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *addressCollapseConstraint; // @synthesize addressCollapseConstraint=_addressCollapseConstraint;
@property(retain, nonatomic) NSLayoutConstraint *emailCollapseConstraint; // @synthesize emailCollapseConstraint=_emailCollapseConstraint;
@property(retain, nonatomic) NSLayoutConstraint *mobileCollapseConstraint; // @synthesize mobileCollapseConstraint=_mobileCollapseConstraint;
@property(retain, nonatomic) NSLayoutConstraint *jobCollapseConstraint; // @synthesize jobCollapseConstraint=_jobCollapseConstraint;
@property(retain, nonatomic) NSLayoutConstraint *qrcodeCollapseConstraint; // @synthesize qrcodeCollapseConstraint=_qrcodeCollapseConstraint;
@property(retain, nonatomic) NSArray *layoutFor5_5; // @synthesize layoutFor5_5=_layoutFor5_5;
@property(retain, nonatomic) NSArray *layoutFor4_7; // @synthesize layoutFor4_7=_layoutFor4_7;
@property(retain, nonatomic) NSArray *layoutFor4; // @synthesize layoutFor4=_layoutFor4;
@property(retain, nonatomic) NSArray *layoutFor3_5; // @synthesize layoutFor3_5=_layoutFor3_5;
@property(copy, nonatomic) NSNumber *overridePrivacyJob; // @synthesize overridePrivacyJob=_overridePrivacyJob;
@property(copy, nonatomic) NSNumber *overridePrivacyMail; // @synthesize overridePrivacyMail=_overridePrivacyMail;
@property(copy, nonatomic) NSNumber *overridePrivacyMobile; // @synthesize overridePrivacyMobile=_overridePrivacyMobile;
@property(retain, nonatomic) UIImageView *qrImageView; // @synthesize qrImageView=_qrImageView;
@property(retain, nonatomic) UILabel *companyAddressLabel; // @synthesize companyAddressLabel=_companyAddressLabel;
@property(retain, nonatomic) UILabel *emailLabel; // @synthesize emailLabel=_emailLabel;
@property(retain, nonatomic) UILabel *mobileLabel; // @synthesize mobileLabel=_mobileLabel;
@property(retain, nonatomic) UILabel *jobLabel; // @synthesize jobLabel=_jobLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *companyNameLabel; // @synthesize companyNameLabel=_companyNameLabel;
@property(retain, nonatomic) UIButton *cornerRoundBackGroundView; // @synthesize cornerRoundBackGroundView=_cornerRoundBackGroundView;
- (void).cxx_destruct;
- (void)onEitherOptionFieldShow;
- (void)onAllOptionFieldHidden;
- (void)updateExtraInfo;
- (void)setQrcodeHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool qrcodeHidden;
- (void)awakeFromNib;
- (void)updateConstraints;

@end
