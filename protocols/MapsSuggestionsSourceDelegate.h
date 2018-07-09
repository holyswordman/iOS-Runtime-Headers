/* Generated by RuntimeBrowser.
 */

@protocol MapsSuggestionsSourceDelegate <NSObject>

@required

- (unsigned long long)addOrUpdateSuggestionEntries:(struct NSArray { Class x1; }*)arg1 source:(struct NSString { Class x1; }*)arg2 deleteMissing:(bool)arg3;
- (bool)attachSource:(id <MapsSuggestionsSource>)arg1;
- (CLLocation *)currentBestLocation;
- (unsigned long long)deleteEntries:(struct NSArray { Class x1; }*)arg1 source:(struct NSString { Class x1; }*)arg2;
- (bool)detachSource:(id <MapsSuggestionsSource>)arg1;

@end