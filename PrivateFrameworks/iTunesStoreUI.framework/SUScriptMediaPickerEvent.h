/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptMediaItemCollection;



@interface SUScriptMediaPickerEvent : SUScriptObject 
{
    SUScriptMediaItemCollection *_collection;
}

@property(getter=_collection,retain,readonly) SUScriptMediaItemCollection *collection;

+ (id)webScriptNameForKey:(const char *)arg1;

- (void)set_collection:(id)arg1;
- (id)_collection;
- (id)initWithCollection:(id)arg1;
- (id)_className;
- (void)dealloc;

@end