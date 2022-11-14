// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

using Microsoft.MixedReality.WorldLocking.ASA;

namespace Scripts.WorldLocking
{
    /// <summary>
    /// Component that adds MRTK object manipulation capabilities on top of the auto-orienting SpacePinOrientable.
    /// </summary>
    public class SpacePinASAInit : SpacePinASA
    {
        #region Unity methods

        /// <summary>
        /// Start(), and set up MRTK manipulation controls.
        /// </summary>
        protected override void Start()
        {
            base.Start();

            Init();
        }

        #endregion Unity methods

        /// <summary>
        /// Callback for when the user has finished positioning the target.
        /// </summary>
        private void Init()
        {
            SetFrozenPose(ExtractModelPose());
            ConfigureLocalPeg();
        }
    }
}