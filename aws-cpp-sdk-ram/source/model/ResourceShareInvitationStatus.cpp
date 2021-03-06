﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ram/model/ResourceShareInvitationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RAM
  {
    namespace Model
    {
      namespace ResourceShareInvitationStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");


        ResourceShareInvitationStatus GetResourceShareInvitationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ResourceShareInvitationStatus::PENDING;
          }
          else if (hashCode == ACCEPTED_HASH)
          {
            return ResourceShareInvitationStatus::ACCEPTED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return ResourceShareInvitationStatus::REJECTED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return ResourceShareInvitationStatus::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceShareInvitationStatus>(hashCode);
          }

          return ResourceShareInvitationStatus::NOT_SET;
        }

        Aws::String GetNameForResourceShareInvitationStatus(ResourceShareInvitationStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceShareInvitationStatus::PENDING:
            return "PENDING";
          case ResourceShareInvitationStatus::ACCEPTED:
            return "ACCEPTED";
          case ResourceShareInvitationStatus::REJECTED:
            return "REJECTED";
          case ResourceShareInvitationStatus::EXPIRED:
            return "EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceShareInvitationStatusMapper
    } // namespace Model
  } // namespace RAM
} // namespace Aws
