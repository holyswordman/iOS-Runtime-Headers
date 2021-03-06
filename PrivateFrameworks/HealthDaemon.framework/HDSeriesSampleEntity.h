/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSeriesSampleEntity : HDSampleEntity

+ (bool)_deleteSeriesWithID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (long long)_insertionEra;
+ (bool)_replaceObjectID:(id)arg1 replacementObjectID:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)_seriesSampleWithID:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)additionalPredicateForEnumeration;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 authorizationFilter:(id /* block */)arg4;
+ (id)freezeSeriesWithIdentifier:(id)arg1 metadata:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (id /* block */)objectInsertionFilterForProfile:(id)arg1;
+ (void)updateInsertionEra;

- (bool)canAddDatumInDatabase:(id)arg1 error:(id*)arg2;
- (bool)freezeWithDatabase:(id)arg1 error:(id*)arg2;
- (bool)updateSampleCount:(long long)arg1 withDatabase:(id)arg2 error:(id*)arg3;

@end
