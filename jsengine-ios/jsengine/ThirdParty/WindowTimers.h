#import <Foundation/Foundation.h>
#import <JavaScriptCore/JavaScriptCore.h>


@interface WTWindowTimers : NSObject

- (instancetype)init:(dispatch_queue_t)q;

- (void)extend:(id)context;

// TODO proper types
@property (nonatomic) NSUInteger tolerance;
@property (readonly, nonatomic) id setTimeout;
@property (readonly, nonatomic) id clearTimeout;
@property (readonly, nonatomic) id setInterval;

@end
