//
//  ViewController.m
//  TestApiLevel
//
//  Created by zmjios on 16/1/16.
//  Copyright © 2016年 zmjios. All rights reserved.
//

#import "ViewController.h"
#import <CoreSpotlight/CoreSpotlight.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import <PassKit/PassKit.h>

NSString * const TestNetworkChinaUnionPay = @"aaaaaaaaaa";

@interface ViewController ()

@property (nonatomic, strong) NSString *aaaaa  __attribute__((deprecated("deprecated property")));

@property(nonatomic,assign) UIRectEdge testEdge  NS_AVAILABLE_IOS(9_0); // Defaults to UIRectEdgeAll

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    
    self.aaaaa = @"aaaaaa";
    
    self.edgesForExtendedLayout = UIRectEdgeNone;
    
    [self testFunction];
    
    
    self.testEdge = UIRectEdgeNone;
    
    
   

    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (void)testFunction
{
    NSLog(@"current System = %@",[[UIDevice currentDevice] systemVersion]);
    CSSearchableItemAttributeSet * attributeSet = [[CSSearchableItemAttributeSet alloc] initWithItemContentType:(NSString *)kUTTypeImage];
    attributeSet.title = @"aaaaa";
    attributeSet.contentDescription = @"bbbbbb";
    attributeSet.keywords = @[@"ccccc"];
    
    
    NSString *test = PKPaymentNetworkChinaUnionPay;
    NSLog(@"test = %@",test);
    
    
    NSString *testU = TestNetworkChinaUnionPay;
    NSLog(@"testU = %@",testU);
    
    
    
    
    
//    if ( SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"9.0")) {
//        NSLog(@"this is in test");
//    }
    
}





@end
