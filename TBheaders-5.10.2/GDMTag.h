//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface GDMTag : NSObject
{
    NSString *_tagName;	// 8 = 0x8
    NSString *_tagUrl;	// 16 = 0x10
    NSString *_tagType;	// 24 = 0x18
    NSString *_tagId;	// 32 = 0x20
    NSString *_searchName;	// 40 = 0x28
}

@property(copy, nonatomic) NSString *searchName; // @synthesize searchName=_searchName;
@property(copy, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
@property(copy, nonatomic) NSString *tagType; // @synthesize tagType=_tagType;
@property(copy, nonatomic) NSString *tagUrl; // @synthesize tagUrl=_tagUrl;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (void).cxx_destruct;
- (_Bool)parserResponse:(id)arg1;

@end
