//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSURLRequest, WWKWXWebViewController;

@protocol WWKWXWebViewControllerDelegate <NSObject>

@optional
- (void)webViewController:(WWKWXWebViewController *)arg1 writeData:(NSDictionary *)arg2;
- (void)webViewController:(WWKWXWebViewController *)arg1 readData:(id *)arg2;
- (_Bool)webViewController:(WWKWXWebViewController *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2;
@end
