//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class Protocol;

@interface CRBProtocolObservers : NSObject
{
    struct scoped_nsobject<Protocol> _protocol;
    struct vector<id, std::__1::allocator<id>> _observers;
    int _invocationDepth;
}

+ (id)observersWithProtocol:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)compact;
- (void)executeOnObservers:(CDUnknownBlockType)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)empty;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) Protocol *protocol;
- (id)initWithProtocol:(id)arg1;
- (id)init;

@end
