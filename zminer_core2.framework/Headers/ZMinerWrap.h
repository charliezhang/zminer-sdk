#import <Foundation/Foundation.h>

@interface ZMinerWrap : NSObject

- (void)startWithWorkerId:(const char*)workerId;

// [0, 100]
- (void)setResourceUsagePercentage:(int)percentage;

- (void)stop;

- (double)getHashRate;

@end
