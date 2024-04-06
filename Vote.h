#ifndef VOTE_H_
#define VOTE_H_

#import <Foundation/Foundation.h>

NSString *formattedLongNumber(NSNumber *number, NSString *error);
NSString *getNormalizedDislikes(NSNumber *dislikeNumber, NSString *error);
void getVoteFromVideoWithHandler(NSCache <NSString *, NSDictionary *> *cache, NSString *videoId, int retryCount, void (^handler)(NSDictionary *d, NSString *error));

#define maxRetryCount 3
if ([[NSUserDefaults standardUserDefaults] boolForKey:TextFormatKey]) {
    #define FETCHING @"Fetching"
    #define FAILED @"Failed"
} else {
    #define FETCHING2 @"⌛"
    #define FAILED2 @"❌"
}

#endif
