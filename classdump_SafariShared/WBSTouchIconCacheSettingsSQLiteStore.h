//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataImageCacheSettingsSQLiteStore.h>

@interface WBSTouchIconCacheSettingsSQLiteStore : WBSSiteMetadataImageCacheSettingsSQLiteStore
{
}

+ (Class)cacheSettingsEntryClass;
+ (long long)databaseSchemaVersion;
- (id)_statementsForMigrationToSchemaVersion:(long long)arg1;
- (id)_deleteAllEntriesSQLiteStatement;
- (id)_deleteEntrySQLiteStatementWithHost:(id)arg1;
- (id)_updateEntrySQLiteStatementWithEntry:(id)arg1;
- (id)_insertEntrySQLiteStatementWithEntry:(id)arg1;
- (id)_selectEntrySQLiteStatementWithHost:(id)arg1;
- (id)_selectAllEntriesSQLiteStatement;
- (id)_createNewDatabaseSQLiteStatement;

@end

