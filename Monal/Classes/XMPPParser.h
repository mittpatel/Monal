//
//  XMPPParser.h
//  Monal
//
//  Created by Anurodh Pokharel on 6/30/13.
//
//

#import <Foundation/Foundation.h>

#import "MLXMPPConstants.h"
#import "MLConstants.h"


@interface XMPPParser : NSObject <NSXMLParserDelegate>
{
    NSString* State;
    NSMutableString* _messageBuffer;
    
    NSString* _type;
    NSString* _from;
    NSString* _to;
    NSString* _user;
    NSString* _resource;
    NSString* _idval;
    
    NSString* _errorType;
    NSString* _errorReason;
    
}


@property (nonatomic, strong, readonly) NSString* type;
/**
 full name as sent from server
 */
@property (nonatomic, strong, readonly) NSString* from;

/**
 full name as sent from server
 */
@property (nonatomic, strong, readonly) NSString* to;

/**
 username part of from
 */
@property (nonatomic, strong, readonly) NSString* user;

/**
 resource part of from
 */
@property (nonatomic, strong, readonly) NSString* resource;

/**
 node id
 */
@property (nonatomic, strong, readonly) NSString* idval;

/**
 if error, the type
 */
@property (nonatomic, strong, readonly) NSString* errorType;

/**
if error, the reason
*/
@property (nonatomic, strong, readonly) NSString* errorReason;


- (id) initWithDictionary:(NSDictionary*) dictionary;

- (id) initWithData:(NSData *) data; 


@end
