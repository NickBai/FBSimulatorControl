//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSError (SimError)
+ (id)errorFromXPCDict:(id)arg1;
+ (id)errorWithLaunchdError:(int)arg1 userInfo:(id)arg2;
+ (id)errorWithLaunchdError:(int)arg1 localizedDescription:(id)arg2;
+ (id)errorWithLaunchdError:(int)arg1;
+ (id)errorWithSimErrno:(int)arg1 localizedDescription:(id)arg2;
+ (id)errorWithSimErrno:(int)arg1 userInfo:(id)arg2;
+ (id)errorWithSimErrno:(int)arg1;
- (id)xpcDict;
@end
