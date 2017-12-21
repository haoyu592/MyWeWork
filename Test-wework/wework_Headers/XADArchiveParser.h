//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, XADHandle, XADResourceFork, XADSkipHandle, XADStringSource;

@interface XADArchiveParser : NSObject
{
    XADHandle *sourcehandle;
    XADSkipHandle *skiphandle;
    XADResourceFork *resourcefork;
    id delegate;
    NSString *password;
    NSString *passwordencodingname;
    _Bool caresaboutpasswordencoding;
    NSMutableDictionary *properties;
    XADStringSource *stringsource;
    int currindex;
    id parsersolidobj;
    NSMutableDictionary *firstsoliddict;
    NSMutableDictionary *prevsoliddict;
    id currsolidobj;
    XADHandle *currsolidhandle;
    _Bool forcesolid;
    _Bool shouldstop;
}

+ (id)volumesForHandle:(id)arg1 firstBytes:(id)arg2 name:(id)arg3;
+ (_Bool)recognizeFileWithHandle:(id)arg1 firstBytes:(id)arg2 resourceFork:(id)arg3 name:(id)arg4 propertiesToAdd:(id)arg5;
+ (_Bool)recognizeFileWithHandle:(id)arg1 firstBytes:(id)arg2 name:(id)arg3 propertiesToAdd:(id)arg4;
+ (_Bool)recognizeFileWithHandle:(id)arg1 firstBytes:(id)arg2 name:(id)arg3;
+ (int)requiredHeaderSize;
+ (id)scanForVolumesWithFilename:(id)arg1 regex:(id)arg2 firstFileExtension:(id)arg3;
+ (id)archiveParserForEntryWithDictionary:(id)arg1 resourceForkDictionary:(id)arg2 archiveParser:(id)arg3 wantChecksum:(_Bool)arg4 error:(int *)arg5;
+ (id)archiveParserForEntryWithDictionary:(id)arg1 resourceForkDictionary:(id)arg2 archiveParser:(id)arg3 wantChecksum:(_Bool)arg4;
+ (id)archiveParserForEntryWithDictionary:(id)arg1 archiveParser:(id)arg2 wantChecksum:(_Bool)arg3 error:(int *)arg4;
+ (id)archiveParserForEntryWithDictionary:(id)arg1 archiveParser:(id)arg2 wantChecksum:(_Bool)arg3;
+ (id)archiveParserForPath:(id)arg1 error:(int *)arg2;
+ (id)archiveParserForPath:(id)arg1;
+ (id)archiveParserForHandle:(id)arg1 firstBytes:(id)arg2 resourceFork:(id)arg3 name:(id)arg4 error:(int *)arg5;
+ (id)archiveParserForHandle:(id)arg1 firstBytes:(id)arg2 resourceFork:(id)arg3 name:(id)arg4;
+ (id)archiveParserForHandle:(id)arg1 firstBytes:(id)arg2 name:(id)arg3 error:(int *)arg4;
+ (id)archiveParserForHandle:(id)arg1 firstBytes:(id)arg2 name:(id)arg3;
+ (id)archiveParserForHandle:(id)arg1 resourceFork:(id)arg2 name:(id)arg3 error:(int *)arg4;
+ (id)archiveParserForHandle:(id)arg1 resourceFork:(id)arg2 name:(id)arg3;
+ (id)archiveParserForHandle:(id)arg1 name:(id)arg2 error:(int *)arg3;
+ (id)archiveParserForHandle:(id)arg1 name:(id)arg2;
+ (Class)archiveParserClassForHandle:(id)arg1 firstBytes:(id)arg2 resourceFork:(id)arg3 name:(id)arg4 propertiesToAdd:(id)arg5;
+ (void)initialize;
- (id)handleForEntryWithDictionary:(id)arg1 wantChecksum:(_Bool)arg2 error:(int *)arg3;
- (int)parseWithoutExceptions;
- (id)handleForSolidStreamWithObject:(id)arg1 wantChecksum:(_Bool)arg2;
- (id)formatName;
- (id)handleForEntryWithDictionary:(id)arg1 wantChecksum:(_Bool)arg2;
- (void)parse;
- (void)reportInterestingFileWithReason:(id)arg1;
- (const char *)encodedCStringPassword;
- (id)encodedPassword;
- (id)XADPathWithCString:(const char *)arg1 encodingName:(id)arg2 separators:(const char *)arg3;
- (id)XADPathWithCString:(const char *)arg1 separators:(const char *)arg2;
- (id)XADPathWithBytes:(const void *)arg1 length:(int)arg2 encodingName:(id)arg3 separators:(const char *)arg4;
- (id)XADPathWithBytes:(const void *)arg1 length:(int)arg2 separators:(const char *)arg3;
- (id)XADPathWithData:(id)arg1 encodingName:(id)arg2 separators:(const char *)arg3;
- (id)XADPathWithData:(id)arg1 separators:(const char *)arg2;
- (id)XADPathWithUnseparatedString:(id)arg1;
- (id)XADPathWithString:(id)arg1;
- (id)XADPath;
- (id)XADStringWithCString:(const char *)arg1 encodingName:(id)arg2;
- (id)XADStringWithCString:(const char *)arg1;
- (id)XADStringWithBytes:(const void *)arg1 length:(int)arg2 encodingName:(id)arg3;
- (id)XADStringWithBytes:(const void *)arg1 length:(int)arg2;
- (id)XADStringWithData:(id)arg1 encodingName:(id)arg2;
- (id)XADStringWithData:(id)arg1;
- (id)XADStringWithString:(id)arg1;
- (void)addEntryWithDictionary:(id)arg1 retainPosition:(_Bool)arg2;
- (void)addEntryWithDictionary:(id)arg1;
- (void)setIsMacArchive:(_Bool)arg1;
- (void)addPropertiesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forPropertyKey:(id)arg2;
- (long long)offsetForVolume:(int)arg1 offset:(long long)arg2;
- (id)volumes;
- (id)subHandleFromSolidStreamForEntryWithDictionary:(id)arg1;
- (id)zeroLengthHandleWithChecksum:(_Bool)arg1;
- (id)skipHandle;
- (id)handleAtDataOffsetForDictionary:(id)arg1;
- (_Bool)shouldKeepParsing;
- (int)testChecksumWithoutExceptions;
- (_Bool)testChecksum;
- (_Bool)hasChecksum;
- (_Bool)wasStopped;
- (id)finderInfoForDictionary:(id)arg1;
- (id)extendedAttributesForDictionary:(id)arg1;
- (id)linkDestinationForDictionary:(id)arg1 error:(int *)arg2;
- (id)linkDestinationForDictionary:(id)arg1;
- (id)stringSource;
- (void)setPasswordEncodingName:(id)arg1;
- (id)passwordEncodingName;
- (_Bool)caresAboutPasswordEncoding;
- (void)setEncodingName:(id)arg1;
- (float)encodingConfidence;
- (id)encodingName;
- (void)setPassword:(id)arg1;
- (_Bool)hasPassword;
- (id)password;
- (_Bool)isEncrypted;
- (id)currentFilename;
- (id)properties;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setAllFilenames:(id)arg1;
- (id)allFilenames;
- (void)setFilename:(id)arg1;
- (id)filename;
- (void)setName:(id)arg1;
- (id)name;
- (void)setResourceFork:(id)arg1;
- (id)resourceFork;
- (void)setHandle:(id)arg1;
- (id)handle;
- (void)dealloc;
- (id)init;
- (id)descriptiveOrderingOfKeysInDictionary:(id)arg1;
- (id)descriptionOfKey:(id)arg1;
- (id)descriptionOfValueInDictionary:(id)arg1 key:(id)arg2;

@end
