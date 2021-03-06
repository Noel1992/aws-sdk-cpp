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

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>DeleteDBClusterSnapshot</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DeleteDBClusterSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API DeleteDBClusterSnapshotRequest : public DocDBRequest
  {
  public:
    DeleteDBClusterSnapshotRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBClusterSnapshot"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the DB cluster snapshot to delete.</p> <p>Constraints: Must
     * be the name of an existing DB cluster snapshot in the <code>available</code>
     * state.</p>
     */
    inline const Aws::String& GetDBClusterSnapshotIdentifier() const{ return m_dBClusterSnapshotIdentifier; }

    /**
     * <p>The identifier of the DB cluster snapshot to delete.</p> <p>Constraints: Must
     * be the name of an existing DB cluster snapshot in the <code>available</code>
     * state.</p>
     */
    inline bool DBClusterSnapshotIdentifierHasBeenSet() const { return m_dBClusterSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the DB cluster snapshot to delete.</p> <p>Constraints: Must
     * be the name of an existing DB cluster snapshot in the <code>available</code>
     * state.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(const Aws::String& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = value; }

    /**
     * <p>The identifier of the DB cluster snapshot to delete.</p> <p>Constraints: Must
     * be the name of an existing DB cluster snapshot in the <code>available</code>
     * state.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(Aws::String&& value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier of the DB cluster snapshot to delete.</p> <p>Constraints: Must
     * be the name of an existing DB cluster snapshot in the <code>available</code>
     * state.</p>
     */
    inline void SetDBClusterSnapshotIdentifier(const char* value) { m_dBClusterSnapshotIdentifierHasBeenSet = true; m_dBClusterSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the DB cluster snapshot to delete.</p> <p>Constraints: Must
     * be the name of an existing DB cluster snapshot in the <code>available</code>
     * state.</p>
     */
    inline DeleteDBClusterSnapshotRequest& WithDBClusterSnapshotIdentifier(const Aws::String& value) { SetDBClusterSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB cluster snapshot to delete.</p> <p>Constraints: Must
     * be the name of an existing DB cluster snapshot in the <code>available</code>
     * state.</p>
     */
    inline DeleteDBClusterSnapshotRequest& WithDBClusterSnapshotIdentifier(Aws::String&& value) { SetDBClusterSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the DB cluster snapshot to delete.</p> <p>Constraints: Must
     * be the name of an existing DB cluster snapshot in the <code>available</code>
     * state.</p>
     */
    inline DeleteDBClusterSnapshotRequest& WithDBClusterSnapshotIdentifier(const char* value) { SetDBClusterSnapshotIdentifier(value); return *this;}

  private:

    Aws::String m_dBClusterSnapshotIdentifier;
    bool m_dBClusterSnapshotIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
