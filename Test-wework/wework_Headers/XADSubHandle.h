//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XADHandle.h"

@interface XADSubHandle : XADHandle
{
    XADHandle *parent;
    long long start;
    long long end;
}

- (int)readAtMost:(int)arg1 toBuffer:(void *)arg2;
- (void)seekToEndOfFile;
- (void)seekToFileOffset:(long long)arg1;
- (_Bool)atEndOfFile;
- (long long)offsetInFile;
- (long long)fileSize;
- (long long)startOffsetInParent;
- (id)parentHandle;
- (void)dealloc;
- (id)initAsCopyOf:(id)arg1;
- (id)initWithHandle:(id)arg1 from:(long long)arg2 length:(long long)arg3;
- (_Bool)isChecksumCorrect;
- (_Bool)hasChecksum;

@end
