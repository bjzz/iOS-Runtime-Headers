/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKRottenTomatoesRating : NSObject {
    unsigned int  _freshness;
    NSNumber * _freshnessPercentage;
}

@property (nonatomic, readonly) unsigned int freshness;
@property (nonatomic, readonly, copy) NSNumber *freshnessPercentage;

+ (unsigned int)freshnessForString:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)freshness;
- (id)freshnessPercentage;
- (id)init;
- (id)initWithFreshness:(unsigned int)arg1 freshnessPercentage:(id)arg2;

@end