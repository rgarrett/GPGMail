/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MailCore/MCISPAccountSettingsManager.h>

@class NSCache, NSString;

@interface _MCISPOnlineAccountSettingsManager : MCISPAccountSettingsManager
{
    NSString *_ispAccountsXQuery;
    NSCache *_fetchedISPPlistsByDomain;
}

- (void)emptyCache;
- (id)_deliveryAccountsSettingsForDomain:(id)arg1 fetchIfNecessary:(BOOL)arg2;
- (id)_receivingAccountSettingsForDomain:(id)arg1 fetchIfNecessary:(BOOL)arg2;
- (void)_finalizeISPAccountsSettings:(id)arg1;
- (id)_ispPlistFromXMLDocument:(id)arg1;
- (id)_fetchISPDataForDomain:(id)arg1;
- (id)_ispPlistForDomain:(id)arg1;
- (BOOL)_shouldVerifyLoadedISPPlist;
- (id)_persistanceFolderName;
- (void)dealloc;
- (id)init;

@end

