/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebNotification : NSObject {
    struct RetainPtr<WebNotificationPrivate> { 
        void *m_ptr; 
    }  _private;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)body;
- (id)dir;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchErrorEvent;
- (void)dispatchShowEvent;
- (id)iconURL;
- (id)init;
- (id)lang;
- (unsigned long long)notificationID;
- (id)origin;
- (id)tag;
- (id)title;

@end
