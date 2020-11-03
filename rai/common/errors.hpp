#pragma once
#include <string>

namespace rai
{
enum class ErrorCode : int
{
    SUCCESS = 0,

    // common errors: 1 ~ 199
    GENERIC                              = 1,
    STREAM                               = 2,
    BLOCK_TYPE                           = 3,
    BLOCK_OPCODE                         = 4,
    EXTENSIONS_LENGTH                    = 5,
    UNKNOWN_COMMAND                      = 6,
    DATA_PATH                            = 7,
    CONFIG_VERSION                       = 8,
    OPEN_OR_CREATE_FILE                  = 9,
    WRITE_FILE                           = 10,
    CONFIG_NODE_VERSION                  = 11,
    CONFIG_LOG_VERSION                   = 12,
    PASSWORD_LENGTH                      = 13,
    PASSWORD_MATCH                       = 14,
    KEY_FILE_EXIST                       = 15,
    DERIVE_KEY                           = 16,
    CMD_MISS_KEY                         = 17,
    KEY_FILE_NOT_EXIST                   = 18,
    KEY_FILE_VERSION                     = 19,
    INVALID_KEY_FILE                     = 20,
    PASSWORD_ERROR                       = 21,
    MAGIC_NUMBER                         = 22,
    INVALID_MESSAGE                      = 23,
    UNKNOWN_MESSAGE                      = 24,
    HANDSHAKE_TYPE                       = 25,
    OUTDATED_VERSION                     = 26,
    UNKNOWN_VERSION                      = 27,
    SIGNATURE                            = 28,
    KEEPLIVE_PEERS                       = 29,
    KEEPLIVE_REACHABLE_PEERS             = 30,
    CONFIG_RPC_VERSION                   = 31,
    PUBLISH_NEED_CONFIRM                 = 32,
    BLOCK_CREDIT                         = 33,
    BLOCK_COUNTER                        = 34,
    BLOCK_TIMESTAMP                      = 35,
    MDB_ENV_CREATE                       = 36,
    MDB_ENV_SET_MAXDBS                   = 37,
    MDB_ENV_SET_MAPSIZE                  = 38,
    MDB_ENV_OPEN                         = 39,
    MDB_TXN_BEGIN                        = 40,
    MDB_DBI_OPEN                         = 41,
    MESSAGE_QUERY_BY                     = 42,
    MESSAGE_QUERY_STATUS                 = 43,
    MESSAGE_QUERY_BLOCK                  = 44,
    MESSAGE_CONFIRM_SIGNATURE            = 45,
    MESSAGE_FORK_ACCOUNT                 = 46,
    MESSAGE_FORK_HEIGHT                  = 47,
    MESSAGE_FORK_BLOCK_EQUAL             = 48,
    MESSAGE_CONFLICT_BLOCK               = 49,
    MESSAGE_CONFLICT_SIGNATURE           = 50,
    MESSAGE_CONFLICT_TIMESTAMP           = 51,
    ACCOUNT_LIMITED                      = 52,
    LEDGER_ACCOUNT_INFO_GET              = 53,
    LEDGER_BLOCK_GET                     = 54,
    CMD_MISS_HASH                        = 55,
    CMD_INVALID_HASH                     = 56,
    LEDGER_RECEIVABLE_INFO_COUNT         = 57,
    LEDGER_BLOCK_COUNT                   = 58,
    LEDGER_ACCOUNT_COUNT                 = 59,
    CONFIG_WALLET_VERSION                = 60,
    WALLET_PASSWORD                      = 61,
    WALLET_LOCKED                        = 62,
    WALLET_INFO_PUT                      = 63,
    WALLET_ACCOUNT_INFO_PUT              = 64,
    WALLET_GET                           = 65,
    WALLET_ACCOUNT_GET                   = 66,
    WALLET_ACCOUNT_EXISTS                = 67,
    DNS_RESOLVE                          = 68,
    TCP_CONNECT                          = 69,
    HTTP_POST                            = 70,
    SUBSCRIBE_TIMESTAMP                  = 71,
    SUBSCRIBE_SIGNATURE                  = 72,
    SUBSCRIBE_NO_CALLBACK                = 73,
    ACCOUNT_ACTION_TOO_QUICKLY           = 74,
    ACCOUNT_ACTION_CREDIT                = 75,
    ACCOUNT_ACTION_BALANCE               = 76,
    LEDGER_RECEIVABLES_GET               = 77,
    WALLET_NOT_SELECTED_ACCOUNT          = 78,
    LEDGER_RECEIVABLE_INFO_GET           = 79,
    WALLET_RECEIVABLE_LESS_THAN_CREDIT   = 80,
    REWARDER_REWARDABLE_LESS_THAN_CREDIT = 81,
    LEDGER_REWARDABLE_INFO_GET           = 82,
    REWARDER_TIMESTAMP                   = 83,
    REWARDER_AMOUNT                      = 84,
    ACCOUNT_ZERO_BALANCE                 = 85,
    PEER_QUERY                           = 86,
    WALLET_EXISTS                        = 87,
    ACCOUNT_MAX_CREDIT                   = 88,
    INVALID_URL                          = 89,
    HTTP_CLIENT_USED                     = 90,
    LOAD_CERT                            = 91,
    SET_SSL_SNI                          = 92,
    SSL_HANDSHAKE                        = 93,
    WRITE_STREAM                         = 94,
    HTTP_GET                             = 95,
    LOGIC_ERROR                          = 96,
    MESSAGE_CONFIRM_TIMESTAMP            = 97,
    ELECTION_TALLY                       = 98,
    UDP_RECEIVE                          = 99,
    RESERVED_IP                          = 100,
    REWARD_TO_ACCOUNT                    = 101,
    WALLET_ACCOUNT_IN_SYNC               = 102,
    EXTENSION_APPEND                     = 103,
    ACCOUNT_RESTRICTED                   = 104,
    LEDGER_SOURCE_PUT                    = 105,
    LEDGER_VERSION_PUT                   = 106,
    LEDGER_UNKNOWN_VERSION               = 107,
    API_KEY                              = 108,
    BLOCK_AMOUNT_GET                     = 109,
    WALLET_TIME_SYNC                     = 110,
    ELECTION_CONFLICT                    = 111,
    UNEXPECTED                           = 112,

    // json parsing errors: 200 ~ 299
    JSON_GENERIC                 = 200,
    JSON_BLOCK_TYPE              = 201,
    JSON_BLOCK_OPCODE            = 202,
    JSON_BLOCK_CREDIT            = 203,
    JSON_BLOCK_COUNTER           = 204,
    JSON_BLOCK_TIMESTAMP         = 205,
    JSON_BLOCK_HEIGHT            = 206,
    JSON_BLOCK_ACCOUNT           = 207,
    JSON_BLOCK_PREVIOUS          = 208,
    JSON_BLOCK_REPRESENTATIVE    = 209,
    JSON_BLOCK_BALANCE           = 210,
    JSON_BLOCK_LINK              = 211,
    JSON_BLOCK_EXTENSIONS_LENGTH = 212,
    JSON_BLOCK_EXTENSIONS_EMPTY  = 213,
    JSON_BLOCK_EXTENSION_TYPE    = 214,
    JSON_BLOCK_EXTENSION_VALUE   = 215,
    JSON_BLOCK_SIGNATURE         = 216,
    JSON_BLOCK_PRICE             = 217,
    JSON_BLOCK_BEGIN_TIME        = 218,
    JSON_BLOCK_END_TIME          = 219,

    JSON_CONFIG_VERSION                  = 250,
    JSON_CONFIG_RPC                      = 251,
    JSON_CONFIG_NODE                     = 252,
    JSON_CONFIG_NODE_VERSION             = 253,
    JSON_CONFIG_LOG                      = 254,
    JSON_CONFIG_LOG_VERSION              = 255,
    JSON_CONFIG_LOG_TO_CERR              = 256,
    JSON_CONFIG_LOG_MAX_SIZE             = 257,
    JSON_CONFIG_LOG_ROTATION_SIZE        = 258,
    JSON_CONFIG_LOG_FLUSH                = 259,
    JSON_CONFIG_NODE_PORT                = 260,
    JSON_CONFIG_NODE_IO_THREADS          = 261,
    JSON_CONFIG_LOG_NETWORK              = 262,
    JSON_CONFIG_LOG_NETWORK_SEND         = 263,
    JSON_CONFIG_LOG_NETWORK_RECEIVE      = 264,
    JSON_CONFIG_LOG_MESSAGE              = 265,
    JSON_CONFIG_LOG_MESSAGE_HANDSHAKE    = 266,
    JSON_CONFIG_PRECONFIGURED_PEERS      = 267,
    JSON_CONFIG_RPC_ENABLE               = 268,
    JSON_CONFIG_RPC_VERSION              = 269,
    JSON_CONFIG_RPC_ADDRESS              = 270,
    JSON_CONFIG_RPC_PORT                 = 271,
    JSON_CONFIG_RPC_ENABLE_CONTROL       = 272,
    JSON_CONFIG_RPC_WHITELIST            = 273,
    JSON_CONFIG_LOG_RPC                  = 274,
    JSON_CONFIG_WALLET_VERSION           = 275,
    JSON_CONFIG_WALLET_SERVER            = 276,
    JSON_CONFIG_CALLBACK_URL             = 277,
    JSON_CONFIG_WALLET_PRECONFIGURED_REP = 278,
    JSON_CONFIG_REWARD_TO                = 279,
    JSON_CONFIG_DAILY_REWARD_TIMES       = 280,
    JSON_CONFIG_ONLINE_STATS_URL         = 281,
    JSON_CONFIG_INVITED_REPS_URL         = 282,
    JSON_CONFIG_WALLET                   = 283,
    JSON_CONFIG_AIRDROP_MISS             = 284,
    JSON_CONFIG_AUTO_CREDIT              = 285,
    JSON_CONFIG_AUTO_RECEIVE             = 286,
    JSON_CONFIG_RECEIVE_MINIMUM          = 287,

    // RPC errors: 300 ~ 399
    RPC_GENERIC                 = 300,
    RPC_JSON                    = 301,
    RPC_JSON_DEPTH              = 302,
    RPC_HTTP_BODY_SIZE          = 303,
    RPC_NOT_LOCALHOST           = 304,
    RPC_MISS_FIELD_BLOCK        = 305,
    RPC_MISS_FIELD_ACCOUNT      = 306,
    RPC_INVALID_FIELD_ACCOUNT   = 307,
    RPC_ACCOUNT_NOT_EXIST       = 308,
    RPC_MISS_FIELD_TYPE         = 309,
    RPC_INVALID_FIELD_TYPE      = 310,
    RPC_MISS_FIELD_HEIGHT       = 311,
    RPC_INVALID_FIELD_HEIGHT    = 312,
    RPC_MISS_FIELD_PREVIOUS     = 313,
    RPC_INVALID_FIELD_PREVIOUS  = 314,
    RPC_UNKNOWN_ACTION          = 315,
    RPC_MISS_FIELD_TIMESTAMP    = 316,
    RPC_INVALID_FIELD_TIMESTAMP = 317,
    RPC_MISS_FIELD_SIGNATURE    = 318,
    RPC_INVALID_FIELD_SIGNATURE = 319,
    RPC_ENABLE_CONTROL          = 320,
    RPC_MISS_FIELD_COUNT        = 321,
    RPC_INVALID_FIELD_COUNT     = 322,
    RPC_MISS_FIELD_HASH         = 323,
    RPC_INVALID_FIELD_HASH      = 324,
    RPC_INVALID_FIELD_ROOT      = 325,
    RPC_MISS_FIELD_TO           = 326,
    RPC_INVALID_FIELD_TO        = 327,
    RPC_MISS_FIELD_AMOUNT       = 328,
    RPC_INVALID_FIELD_AMOUNT    = 329,

    // Block process errors: 400 ~ 499
    BLOCK_PROCESS_GENERIC                     = 400,
    BLOCK_PROCESS_SIGNATURE                   = 401,
    BLOCK_PROCESS_EXISTS                      = 402,
    BLOCK_PROCESS_GAP_PREVIOUS                = 403,
    BLOCK_PROCESS_GAP_RECEIVE_SOURCE          = 404,
    BLOCK_PROCESS_GAP_REWARD_SOURCE           = 405,
    BLOCK_PROCESS_PREVIOUS                    = 406,
    BLOCK_PROCESS_OPCODE                      = 407,
    BLOCK_PROCESS_CREDIT                      = 408,
    BLOCK_PROCESS_COUNTER                     = 409,
    BLOCK_PROCESS_TIMESTAMP                   = 410,
    BLOCK_PROCESS_BALANCE                     = 411,
    BLOCK_PROCESS_UNRECEIVABLE                = 412,
    BLOCK_PROCESS_UNREWARDABLE                = 413,
    BLOCK_PROCESS_PRUNED                      = 414,
    BLOCK_PROCESS_FORK                        = 415,
    BLOCK_PROCESS_TYPE_MISMATCH               = 416,
    BLOCK_PROCESS_REPRESENTATIVE              = 417,
    BLOCK_PROCESS_LINK                        = 418,
    BLOCK_PROCESS_LEDGER_BLOCK_PUT            = 419,
    BLOCK_PROCESS_LEDGER_SUCCESSOR_SET        = 420,
    BLOCK_PROCESS_LEDGER_BLOCK_GET            = 421,
    BLOCK_PROCESS_TYPE_UNKNOWN                = 422,
    BLOCK_PROCESS_LEDGER_RECEIVABLE_INFO_PUT  = 423,
    BLOCK_PROCESS_LEDGER_RECEIVABLE_INFO_DEL  = 424,
    BLOCK_PROCESS_ACCOUNT_EXCEED_TRANSACTIONS = 425,
    BLOCK_PROCESS_LEDGER_REWARDABLE_INFO_PUT  = 426,
    BLOCK_PROCESS_LEDGER_REWARDABLE_INFO_DEL  = 427,
    BLOCK_PROCESS_LEDGER_ACCOUNT_INFO_PUT     = 428,
    BLOCK_PROCESS_LEDGER_INCONSISTENT         = 429,
    BLOCK_PROCESS_LEDGER_BLOCK_DEL            = 430,
    BLOCK_PROCESS_LEDGER_ROLLBACK_BLOCK_PUT   = 431,
    BLOCK_PROCESS_LEDGER_ACCOUNT_INFO_DEL     = 432,
    BLOCK_PROCESS_LEDGER_FORK_DEL             = 433,
    BLOCK_PROCESS_LEDGER_FORK_GET             = 434,
    BLOCK_PROCESS_LEDGER_FORK_PUT             = 435,

    BLOCK_PROCESS_ROLLBACK_REWARDED          = 488,
    BLOCK_PROCESS_CONFIRM_BLOCK_MISS         = 489,
    BLOCK_PROCESS_ROLLBACK_SOURCE_PRUNED     = 490,
    BLOCK_PROCESS_ROLLBACK_NOT_EQUAL_TO_HEAD = 491,
    BLOCK_PROCESS_ROLLBACK_RECEIVED          = 492,
    BLOCK_PROCESS_ROLLBACK_NON_HEAD          = 493,
    BLOCK_PROCESS_ROLLBACK_TAIL              = 494,
    BLOCK_PROCESS_ROLLBACK_IGNORE            = 495,
    BLOCK_PROCESS_PREPEND_IGNORE             = 496,
    BLOCK_PROCESS_UNKNOWN_OPERATION          = 497,
    BLOCK_PROCESS_CONTINUE                   = 498,
    BLOCK_PROCESS_WAIT                       = 499,

    BOOTSTRAP_GENERIC         = 500,
    BOOTSTRAP_PEER            = 501,
    BOOTSTRAP_RESET           = 502,
    BOOTSTRAP_ATTACK          = 503,
    BOOTSTRAP_CONNECT         = 504,
    BOOTSTRAP_TYPE            = 505,
    BOOTSTRAP_SEND            = 506,
    BOOTSTRAP_RECEIVE         = 507,
    BOOTSTRAP_ACCOUNT         = 508,
    BOOTSTRAP_FORK_LENGTH     = 509,
    BOOTSTRAP_FORK_BLOCK      = 510,
    BOOTSTRAP_SIZE            = 511,
    BOOTSTRAP_MESSAGE_TYPE    = 512,
    BOOTSTRAP_SLOW_CONNECTION = 513,

    MAX = 600
};

std::string ErrorString(rai::ErrorCode);

}  // namespace rai

#define IF_NOT_SUCCESS_RETURN(error_code)      \
    if (error_code != rai::ErrorCode::SUCCESS) \
    {                                          \
        return error_code;                     \
    }

#define IF_NOT_SUCCESS_RETURN_VOID(error_code) \
    if (error_code != rai::ErrorCode::SUCCESS) \
    {                                          \
        return;                                \
    }
