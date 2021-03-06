/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVRootMenuBarController : UITabBarController <IKAppTabBarController, UITabBarControllerDelegate, _TVMenuBarStackViewDelegate> {
    <_TVAppNavigationControllerDelegate> * _appNavigationControllerDelegate;
    IKAppTabBar * _appTabBar;
    NSArray * _appTabBarItems;
    unsigned int  _layoutType;
    UIVisualEffectView * _paletteView;
    NSArray * _paletteViewContraints;
    unsigned int  _previousSelectedIndex;
    _TVMenuBarStackView * _stackView;
    UIView * _tabBarSeparator;
}

@property (nonatomic) <_TVAppNavigationControllerDelegate> *appNavigationControllerDelegate;
@property (nonatomic, retain) IKAppTabBar *appTabBar;
@property (nonatomic, retain) NSArray *appTabBarItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int layoutType;
@property (nonatomic, retain) UIVisualEffectView *paletteView;
@property (nonatomic, retain) NSArray *paletteViewContraints;
@property (nonatomic) unsigned int previousSelectedIndex;
@property (nonatomic, retain) _TVMenuBarStackView *stackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *tabBarSeparator;

- (void).cxx_destruct;
- (void)_setSelectedViewController:(id)arg1;
- (void)_updateVisibilityLayoutType:(unsigned int)arg1;
- (id)appNavigationControllerDelegate;
- (id)appTabBar;
- (id)appTabBarItems;
- (void)dealloc;
- (id)init;
- (unsigned int)layoutType;
- (unsigned int)numberOfTabsInTabBar:(id)arg1;
- (id)paletteView;
- (id)paletteViewContraints;
- (unsigned int)previousSelectedIndex;
- (id)selectedTabItemForTabBar:(id)arg1;
- (void)setAppNavigationControllerDelegate:(id)arg1;
- (void)setAppTabBar:(id)arg1;
- (void)setAppTabBarItems:(id)arg1;
- (void)setLayoutType:(unsigned int)arg1;
- (void)setPaletteView:(id)arg1;
- (void)setPaletteViewContraints:(id)arg1;
- (void)setPreviousSelectedIndex:(unsigned int)arg1;
- (void)setSelectedIndex:(unsigned int)arg1;
- (void)setStackView:(id)arg1;
- (void)setTabBarSeparator:(id)arg1;
- (id)stackView;
- (void)stackView:(id)arg1 poppedToRootForIndex:(unsigned int)arg2;
- (void)stackView:(id)arg1 selectedIndex:(unsigned int)arg2;
- (void)tabBar:(id)arg1 setSelectedTabItem:(id)arg2;
- (id)tabBar:(id)arg1 setTabItems:(id)arg2;
- (id)tabBar:(id)arg1 tabItemAtIndex:(unsigned int)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (unsigned int)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
- (id)tabBarSeparator;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transientTabItemForTabBar:(id)arg1;
- (void)viewDidLoad;

@end
