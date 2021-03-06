/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARRankingLogic : NSObject {
    NSArray * _modelPrecedence;
    double  _personalizationWt;
    PARReRankingRules * _reRankingRules;
    unsigned long long  _sectionEndPos;
    unsigned long long  _sectionStartPos;
    long long  _similarityFunction;
    bool  _useBordaCount;
    bool  _useOverallModel;
}

@property (nonatomic, retain) NSArray *modelPrecedence;
@property (nonatomic) double personalizationWt;
@property (nonatomic, retain) PARReRankingRules *reRankingRules;
@property (nonatomic) unsigned long long sectionEndPos;
@property (nonatomic) unsigned long long sectionStartPos;
@property (nonatomic) long long similarityFunction;
@property (nonatomic) bool useBordaCount;
@property (nonatomic) bool useOverallModel;

+ (id)defaultValue;
+ (id)responseFromJSON:(id)arg1;

- (void).cxx_destruct;
- (id)modelPrecedence;
- (double)personalizationWt;
- (id)reRankingRules;
- (unsigned long long)sectionEndPos;
- (unsigned long long)sectionStartPos;
- (void)setModelPrecedence:(id)arg1;
- (void)setPersonalizationWt:(double)arg1;
- (void)setReRankingRules:(id)arg1;
- (void)setSectionEndPos:(unsigned long long)arg1;
- (void)setSectionStartPos:(unsigned long long)arg1;
- (void)setSimilarityFunction:(long long)arg1;
- (void)setUseBordaCount:(bool)arg1;
- (void)setUseOverallModel:(bool)arg1;
- (long long)similarityFunction;
- (bool)useBordaCount;
- (bool)useOverallModel;

@end
