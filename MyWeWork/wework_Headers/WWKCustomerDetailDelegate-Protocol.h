//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WWKCustomerDetailCell;

@protocol WWKCustomerDetailDelegate <NSObject>

@optional
- (void)moreButtonDidClick:(WWKCustomerDetailCell *)arg1;
- (void)customerDetailCellDidEndEditing:(WWKCustomerDetailCell *)arg1;
- (void)customerDetailCellDidBeginEditing:(WWKCustomerDetailCell *)arg1;
- (void)customerDetailCellDidGoNextEditingField:(WWKCustomerDetailCell *)arg1;
- (void)customerDetailCell:(WWKCustomerDetailCell *)arg1 didUpdateValue:(NSString *)arg2;
- (void)customerDetailCell:(WWKCustomerDetailCell *)arg1 reportLayoutHeight:(double)arg2;
@end
