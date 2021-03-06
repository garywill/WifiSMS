/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */



@interface YTSearchRequest : YTFeedRequest 
{
}

+ (NSUInteger)videosPerRequest;
+ (id)feedCountryCode;

- (void)didParseData;
- (void)failWithError:(id)arg1;
- (void)searchForVideoWithID:(id)arg1 withDelegate:(id)arg2;
- (void)searchForVideosWithIDs:(id)arg1 withDelegate:(id)arg2;
- (void)searchForVideosMatchingString:(id)arg1 startingAtIndex:(NSUInteger)arg2 withDelegate:(id)arg3;
- (void)searchForVideosWithFeedURLBase:(id)arg1 startingAtIndex:(NSUInteger)arg2 maxResults:(NSInteger)arg3 withTimeQualifier:(id)arg4 authenticationRequired:(BOOL)arg5 withDelegate:(id)arg6;
- (void)searchForRecentVideosStartingAtIndex:(NSUInteger)arg1 withDelegate:(id)arg2;
- (void)searchForVideosRelatedToVideo:(id)arg1 withDelegate:(id)arg2;
- (void)searchForVideosByAuthor:(id)arg1 startingAtIndex:(NSUInteger)arg2 maxResults:(NSUInteger)arg3 withDelegate:(id)arg4;
- (void)searchForFavoriteVideosStartingAtIndex:(NSUInteger)arg1 withDelegate:(id)arg2;
- (void)searchForMyVideosStartingAtIndex:(NSUInteger)arg1 withDelegate:(id)arg2;
- (BOOL)receivedValidResponse:(id)arg1;

@end
