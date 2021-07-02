
//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2021 Ripple Labs Inc.
    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.
    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================


#ifndef REPORTING_ACCOUNT_HANDLER_H_INCLUDED
#define REPORTING_ACCOUNT_HANDLER_H_INCLUDED

#include <handlers/Context.h>
#include <handlers/Status.h>
#include <handlers/Handlers.h>
#include <boost/json.hpp>

namespace RPC
{

Result  
doAccountInfo(Context const& context);

Result
doAccountChannels(Context const& context);

Result
doAccountCurrencies(Context const& context);

Result
doAccountLines(Context const& context);

Result  
doAccountObjects(Context const& context);

Result
doAccountOffers(Context const& context);

} // namespace RPC

#endif // REPORTING_ACCOUNT_HANDLER_H_INCLUDED