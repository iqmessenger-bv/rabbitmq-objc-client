#import <Foundation/Foundation.h>
#import "RMQConnectionDelegate.h"

@protocol RMQDispatcher <NSObject, RMQFrameHandler>

- (void)activateWithChannel:(id<RMQChannel>)channel
                   delegate:(id<RMQConnectionDelegate>)delegate;

- (void)sendSyncMethod:(id<RMQMethod>)method
                waitOn:(Class)waitClass
     completionHandler:(void (^)(RMQFramesetValidationResult *result))completionHandler;

- (void)sendSyncMethod:(id<RMQMethod>)method
                waitOn:(Class)waitClass;

- (void)sendSyncMethodBlocking:(id<RMQMethod>)method
                        waitOn:(Class)waitClass;

- (void)sendAsyncMethod:(id<RMQMethod>)method;

@end
