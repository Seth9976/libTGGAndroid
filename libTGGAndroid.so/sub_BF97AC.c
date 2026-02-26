long sub_BF97AC(long* param0, int* param1, int* param2, long double* param3, long param4, int param5, short* param6, short* param7) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    uint32_t v8;
    int v9;
    int v10;
    int v11;
    char v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    int v28;
    int v29;
    int v30;
    int v31;
    int v32;
    int v33;
    int v34;
    int v35;
    int v36;
    int v37;
    int v38;
    int v39;
    int v40;
    int v41;
    int v42;
    int v43;
    int v44;
    int v45;
    int v46;
    int v47;
    int v48;
    int v49;
    int v50;
    int v51;
    int v52;
    int v53;
    int v54;
    int v55;
    int v56;
    int v57;
    int v58;
    int v59;
    int v60;
    int v61;
    int v62;
    int v63;
    int v64;
    int v65;
    int v66;
    int v67;
    int v68;
    int v69;
    int v70;
    int v71;
    int v72;
    int v73;
    int v74;
    int v75;
    int v76;
    int v77;
    int v78;
    int v79;
    int v80;
    int v81;
    int v82;
    int v83;
    int v84;
    int v85;
    int v86;
    int v87;
    __int128 v88;
    __int128 v89;
    __int128 v90;
    long v91 = (uint64_t)v88;
    int v92 = (uint32_t)*param7;
    long double v93 = *(param3 + 6);
    long double v94 = *(param3 + 7);
    long double v95 = *(param3 + 4);
    long double v96 = *(param3 + 5);
    long double v97 = *(param3 + 2);
    long double v98 = *(param3 + 3);
    long double v99 = *param3;
    long double v100 = *(param3 + 1);
    int v101 = (uint32_t)*(param7 + 1);
    int v102 = v92;
    long double v103 = *(param3 + 14);
    long double v104 = *(param3 + 0xF);
    long double v105 = *(param3 + 12);
    long double v106 = *(param3 + 13);
    long double v107 = *(param3 + 10);
    long double v108 = *(param3 + 11);
    long double v109 = *(param3 + 8);
    long double v110 = *(param3 + 9);
    __int128 v111 = (unsigned __int128)(((__SyntheticTypeUnknownU)v95 | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)v95 | ((unsigned __int128)(uint32_t)v93 << 32) | ((unsigned __int128)(uint32_t)(v95 >>> 0x20X) << 64) | ((unsigned __int128)(uint32_t)(v93 >>> 0x20X) << 96)) << 128)) >>> 0x40X);
    TRN2(v89, v99, v97);
    __int128 v112 = (unsigned __int128)(((__SyntheticTypeUnknownU)v111 | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)v99 | ((unsigned __int128)(uint32_t)v97 << 32) | ((unsigned __int128)(uint32_t)(v99 >>> 0x20X) << 64) | ((unsigned __int128)(uint32_t)(v97 >>> 0x20X) << 96)) << 128)) >>> 0x40X);
    TRN2(v111, v96, v94);
    TRN2(v88, v100, v98);
    int v113 = (uint32_t)*(param7 + 480);
    TRN2(v90, v95, v93);
    __int128 v114 = (unsigned __int128)(((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)(v95 >>> 0x40X) | ((unsigned __int128)(uint32_t)(v93 >>> 0x40X) << 32) | ((unsigned __int128)(uint32_t)(v95 >>> 0x60X) << 64) | ((unsigned __int128)(uint32_t)(v93 >>> 0x60X) << 96)) | ((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v89 | ((__SyntheticTypeUnknownU)v99 << 128)) >>> 0x40X) << 128)) >>> 0x40X);
    __int128 v115 = (unsigned __int128)(((__SyntheticTypeUnknownU)v96 | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)v96 | ((unsigned __int128)(uint32_t)v94 << 32) | ((unsigned __int128)(uint32_t)(v96 >>> 0x20X) << 64) | ((unsigned __int128)(uint32_t)(v94 >>> 0x20X) << 96)) << 128)) >>> 0x40X);
    __int128 v116 = (unsigned __int128)(((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v96 | ((__SyntheticTypeUnknownU)v111 << 128)) >>> 0x40X) | ((__SyntheticTypeUnknownU)v88 << 128)) >>> 0x40X);
    TRN2(v88, v105, v103);
    __int128 v117 = (unsigned __int128)(((__SyntheticTypeUnknownU)v115 | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)v100 | ((unsigned __int128)(uint32_t)v98 << 32) | ((unsigned __int128)(uint32_t)(v100 >>> 0x20X) << 64) | ((unsigned __int128)(uint32_t)(v98 >>> 0x20X) << 96)) << 128)) >>> 0x40X);
    TRN2(v115, v109, v107);
    __int128 v118 = (unsigned __int128)(((__SyntheticTypeUnknownU)v105 | ((__SyntheticTypeUnknownU)v88 << 128)) >>> 0x40X);
    __int128 v119 = (unsigned __int128)(((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v95 | ((__SyntheticTypeUnknownU)v90 << 128)) >>> 0x40X) | ((__SyntheticTypeUnknownU)v89 << 128)) >>> 0x40X);
    __int128 v120 = (unsigned __int128)(((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v105 | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)v105 | ((unsigned __int128)(uint32_t)v103 << 32) | ((unsigned __int128)(uint32_t)(v105 >>> 0x20X) << 64) | ((unsigned __int128)(uint32_t)(v103 >>> 0x20X) << 96)) << 128)) >>> 0x40X) | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)v109 | ((unsigned __int128)(uint32_t)v107 << 32) | ((unsigned __int128)(uint32_t)(v109 >>> 0x20X) << 64) | ((unsigned __int128)(uint32_t)(v107 >>> 0x20X) << 96)) << 128)) >>> 0x40X);
    __int128 v121 = (unsigned __int128)(((__SyntheticTypeUnknownU)v118 | ((__SyntheticTypeUnknownU)v115 << 128)) >>> 0x40X);
    TRN2(v118, v110, v108);
    __int128 v122 = (unsigned __int128)(((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)(v96 >>> 0x40X) | ((unsigned __int128)(uint32_t)(v94 >>> 0x40X) << 32) | ((unsigned __int128)(uint32_t)(v96 >>> 0x60X) << 64) | ((unsigned __int128)(uint32_t)(v94 >>> 0x60X) << 96)) | ((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v88 | ((__SyntheticTypeUnknownU)v100 << 128)) >>> 0x40X) << 128)) >>> 0x40X);
    TRN2(v103, v106, v104);
    __int128 v123 = (unsigned __int128)(((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)(v105 >>> 0x40X) | ((unsigned __int128)(uint32_t)(v103 >>> 0x40X) << 32) | ((unsigned __int128)(uint32_t)(v105 >>> 0x60X) << 64) | ((unsigned __int128)(uint32_t)(v103 >>> 0x60X) << 96)) | ((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v115 | ((__SyntheticTypeUnknownU)v109 << 128)) >>> 0x40X) << 128)) >>> 0x40X);
    int v124 = (uint32_t)*(param7 + 0x1e1);
    __int128 v125 = (unsigned __int128)(((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v106 | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)v106 | ((unsigned __int128)(uint32_t)v104 << 32) | ((unsigned __int128)(uint32_t)(v106 >>> 0x20X) << 64) | ((unsigned __int128)(uint32_t)(v104 >>> 0x20X) << 96)) << 128)) >>> 0x40X) | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)v110 | ((unsigned __int128)(uint32_t)v108 << 32) | ((unsigned __int128)(uint32_t)(v110 >>> 0x20X) << 64) | ((unsigned __int128)(uint32_t)(v108 >>> 0x20X) << 96)) << 128)) >>> 0x40X);
    __int128 v126 = (unsigned __int128)(((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)(v106 >>> 0x40X) | ((unsigned __int128)(uint32_t)(v104 >>> 0x40X) << 32) | ((unsigned __int128)(uint32_t)(v106 >>> 0x60X) << 64) | ((unsigned __int128)(uint32_t)(v104 >>> 0x60X) << 96)) | ((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v118 | ((__SyntheticTypeUnknownU)v110 << 128)) >>> 0x40X) << 128)) >>> 0x40X);
    __int128 v127 = (unsigned __int128)(((__SyntheticTypeUnknownU)((unsigned __int128)(v95 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(uint32_t)(v93 >>> 0x40X) << 96)) | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)(v99 >>> 0x40X) | ((unsigned __int128)(uint32_t)(v97 >>> 0x40X) << 32) | ((unsigned __int128)(uint32_t)(v99 >>> 0x60X) << 64) | ((unsigned __int128)(uint32_t)(v97 >>> 0x60X) << 96)) << 128)) >>> 0x40X);
    __int128 v128 = (unsigned __int128)(((__SyntheticTypeUnknownU)((unsigned __int128)(v96 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(uint32_t)(v94 >>> 0x40X) << 96)) | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)(v100 >>> 0x40X) | ((unsigned __int128)(uint32_t)(v98 >>> 0x40X) << 32) | ((unsigned __int128)(uint32_t)(v100 >>> 0x60X) << 64) | ((unsigned __int128)(uint32_t)(v98 >>> 0x60X) << 96)) << 128)) >>> 0x40X);
    __int128 v129 = (unsigned __int128)(((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v106 | ((__SyntheticTypeUnknownU)v103 << 128)) >>> 0x40X) | ((__SyntheticTypeUnknownU)v118 << 128)) >>> 0x40X);
    __int128 v130 = (unsigned __int128)(((__SyntheticTypeUnknownU)v112 | ((__SyntheticTypeUnknownU)v112 << 128)) >>> 0x40X);
    __int128 v131 = (unsigned __int128)(((__SyntheticTypeUnknownU)v119 | ((__SyntheticTypeUnknownU)v119 << 128)) >>> 0x40X);
    __int128 v132 = (unsigned __int128)(((__SyntheticTypeUnknownU)v114 | ((__SyntheticTypeUnknownU)v114 << 128)) >>> 0x40X);
    __int128 v133 = (unsigned __int128)(((__SyntheticTypeUnknownU)v117 | ((__SyntheticTypeUnknownU)v117 << 128)) >>> 0x40X);
    __int128 v134 = (unsigned __int128)(((__SyntheticTypeUnknownU)v116 | ((__SyntheticTypeUnknownU)v116 << 128)) >>> 0x40X);
    __int128 v135 = (unsigned __int128)(((__SyntheticTypeUnknownU)v122 | ((__SyntheticTypeUnknownU)v122 << 128)) >>> 0x40X);
    __int128 v136 = (unsigned __int128)(((__SyntheticTypeUnknownU)v120 | ((__SyntheticTypeUnknownU)v120 << 128)) >>> 0x40X);
    __int128 v137 = (unsigned __int128)(((__SyntheticTypeUnknownU)((unsigned __int128)(v105 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(uint32_t)(v103 >>> 0x40X) << 96)) | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)(v109 >>> 0x40X) | ((unsigned __int128)(uint32_t)(v107 >>> 0x40X) << 32) | ((unsigned __int128)(uint32_t)(v109 >>> 0x60X) << 64) | ((unsigned __int128)(uint32_t)(v107 >>> 0x60X) << 96)) << 128)) >>> 0x40X);
    __int128 v138 = (unsigned __int128)(((__SyntheticTypeUnknownU)v123 | ((__SyntheticTypeUnknownU)v123 << 128)) >>> 0x40X);
    __int128 v139 = (unsigned __int128)(((__SyntheticTypeUnknownU)v125 | ((__SyntheticTypeUnknownU)v125 << 128)) >>> 0x40X);
    __int128 v140 = (unsigned __int128)(((__SyntheticTypeUnknownU)((unsigned __int128)(v106 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(uint32_t)(v104 >>> 0x40X) << 96)) | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)(v110 >>> 0x40X) | ((unsigned __int128)(uint32_t)(v108 >>> 0x40X) << 32) | ((unsigned __int128)(uint32_t)(v110 >>> 0x60X) << 64) | ((unsigned __int128)(uint32_t)(v108 >>> 0x60X) << 96)) << 128)) >>> 0x40X);
    __int128 v141 = (unsigned __int128)(((__SyntheticTypeUnknownU)v126 | ((__SyntheticTypeUnknownU)v126 << 128)) >>> 0x40X);
    __int128 v142 = (unsigned __int128)(((__SyntheticTypeUnknownU)v127 | ((__SyntheticTypeUnknownU)v127 << 128)) >>> 0x40X);
    __int128 v143 = (unsigned __int128)(((__SyntheticTypeUnknownU)v128 | ((__SyntheticTypeUnknownU)v128 << 128)) >>> 0x40X);
    __int128 v144 = (unsigned __int128)(((__SyntheticTypeUnknownU)v121 | ((__SyntheticTypeUnknownU)v121 << 128)) >>> 0x40X);
    __int128 v145 = (unsigned __int128)(((__SyntheticTypeUnknownU)v129 | ((__SyntheticTypeUnknownU)v129 << 128)) >>> 0x40X);
    __int128 v146 = (unsigned __int128)((uint32_t)v130 + (uint32_t)v135) | ((unsigned __int128)((uint32_t)(v130 >>> 0x20X) + (uint32_t)(v135 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v130 >>> 0x40X) + (uint32_t)(v135 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v130 >>> 0x60X) + (uint32_t)(v135 >>> 0x60X)) << 96);
    __int128 v147 = (unsigned __int128)((uint32_t)v130 - (uint32_t)v135) | ((unsigned __int128)((uint32_t)(v130 >>> 0x20X) - (uint32_t)(v135 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v130 >>> 0x40X) - (uint32_t)(v135 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v130 >>> 0x60X) - (uint32_t)(v135 >>> 0x60X)) << 96);
    __int128 v148 = (unsigned __int128)((uint32_t)v132 + (uint32_t)v133) | ((unsigned __int128)((uint32_t)(v132 >>> 0x20X) + (uint32_t)(v133 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v132 >>> 0x40X) + (uint32_t)(v133 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v132 >>> 0x60X) + (uint32_t)(v133 >>> 0x60X)) << 96);
    __int128 v149 = (unsigned __int128)(((__SyntheticTypeUnknownU)v137 | ((__SyntheticTypeUnknownU)v137 << 128)) >>> 0x40X);
    __int128 v150 = (unsigned __int128)(((__SyntheticTypeUnknownU)v140 | ((__SyntheticTypeUnknownU)v140 << 128)) >>> 0x40X);
    __int128 v151 = (unsigned __int128)((uint32_t)v136 + (uint32_t)v141) | ((unsigned __int128)((uint32_t)(v136 >>> 0x20X) + (uint32_t)(v141 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v136 >>> 0x40X) + (uint32_t)(v141 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v136 >>> 0x60X) + (uint32_t)(v141 >>> 0x60X)) << 96);
    __int128 v152 = (unsigned __int128)((uint32_t)v136 - (uint32_t)v141) | ((unsigned __int128)((uint32_t)(v136 >>> 0x20X) - (uint32_t)(v141 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v136 >>> 0x40X) - (uint32_t)(v141 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v136 >>> 0x60X) - (uint32_t)(v141 >>> 0x60X)) << 96);
    __int128 v153 = (unsigned __int128)((uint32_t)v138 + (uint32_t)v139) | ((unsigned __int128)((uint32_t)(v138 >>> 0x20X) + (uint32_t)(v139 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v138 >>> 0x40X) + (uint32_t)(v139 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v138 >>> 0x60X) + (uint32_t)(v139 >>> 0x60X)) << 96);
    __int128 v154 = (unsigned __int128)((uint32_t)v131 + (uint32_t)v143) | ((unsigned __int128)((uint32_t)(v131 >>> 0x20X) + (uint32_t)(v143 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v131 >>> 0x40X) + (uint32_t)(v143 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v131 >>> 0x60X) + (uint32_t)(v143 >>> 0x60X)) << 96);
    __int128 v155 = (unsigned __int128)((uint32_t)v131 - (uint32_t)v143) | ((unsigned __int128)((uint32_t)(v131 >>> 0x20X) - (uint32_t)(v143 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v131 >>> 0x40X) - (uint32_t)(v143 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v131 >>> 0x60X) - (uint32_t)(v143 >>> 0x60X)) << 96);
    __int128 v156 = (unsigned __int128)((uint32_t)v142 + (uint32_t)v134) | ((unsigned __int128)((uint32_t)(v142 >>> 0x20X) + (uint32_t)(v134 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v142 >>> 0x40X) + (uint32_t)(v134 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v142 >>> 0x60X) + (uint32_t)(v134 >>> 0x60X)) << 96);
    __int128 v157 = (unsigned __int128)((uint32_t)v142 - (uint32_t)v134) | ((unsigned __int128)((uint32_t)(v142 >>> 0x20X) - (uint32_t)(v134 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v142 >>> 0x40X) - (uint32_t)(v134 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v142 >>> 0x60X) - (uint32_t)(v134 >>> 0x60X)) << 96);
    __int128 v158 = (unsigned __int128)((uint32_t)v148 + (uint32_t)v146) | ((unsigned __int128)((uint32_t)(v148 >>> 0x20X) + (uint32_t)(v146 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v148 >>> 0x40X) + (uint32_t)(v146 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v148 >>> 0x60X) + (uint32_t)(v146 >>> 0x60X)) << 96);
    __int128 v159 = (unsigned __int128)((uint32_t)v146 - (uint32_t)v148) | ((unsigned __int128)((uint32_t)(v146 >>> 0x20X) - (uint32_t)(v148 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v146 >>> 0x40X) - (uint32_t)(v148 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v146 >>> 0x60X) - (uint32_t)(v148 >>> 0x60X)) << 96);
    __int128 v160 = (unsigned __int128)((uint32_t)v144 + (uint32_t)v150) | ((unsigned __int128)((uint32_t)(v144 >>> 0x20X) + (uint32_t)(v150 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v144 >>> 0x40X) + (uint32_t)(v150 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v144 >>> 0x60X) + (uint32_t)(v150 >>> 0x60X)) << 96);
    __int128 v161 = (unsigned __int128)((uint32_t)v144 - (uint32_t)v150) | ((unsigned __int128)((uint32_t)(v144 >>> 0x20X) - (uint32_t)(v150 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v144 >>> 0x40X) - (uint32_t)(v150 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v144 >>> 0x60X) - (uint32_t)(v150 >>> 0x60X)) << 96);
    __int128 v162 = (unsigned __int128)((uint32_t)v149 + (uint32_t)v145) | ((unsigned __int128)((uint32_t)(v149 >>> 0x20X) + (uint32_t)(v145 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v149 >>> 0x40X) + (uint32_t)(v145 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v149 >>> 0x60X) + (uint32_t)(v145 >>> 0x60X)) << 96);
    __int128 v163 = (unsigned __int128)((uint32_t)v149 - (uint32_t)v145) | ((unsigned __int128)((uint32_t)(v149 >>> 0x20X) - (uint32_t)(v145 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v149 >>> 0x40X) - (uint32_t)(v145 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v149 >>> 0x60X) - (uint32_t)(v145 >>> 0x60X)) << 96);
    __int128 v164 = (unsigned __int128)((uint32_t)v153 + (uint32_t)v151) | ((unsigned __int128)((uint32_t)(v153 >>> 0x20X) + (uint32_t)(v151 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v153 >>> 0x40X) + (uint32_t)(v151 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v153 >>> 0x60X) + (uint32_t)(v151 >>> 0x60X)) << 96);
    __int128 v165 = (unsigned __int128)((uint32_t)v151 - (uint32_t)v153) | ((unsigned __int128)((uint32_t)(v151 >>> 0x20X) - (uint32_t)(v153 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v151 >>> 0x40X) - (uint32_t)(v153 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v151 >>> 0x60X) - (uint32_t)(v153 >>> 0x60X)) << 96);
    __int128 v166 = (unsigned __int128)((uint32_t)v156 + (uint32_t)v154) | ((unsigned __int128)((uint32_t)(v156 >>> 0x20X) + (uint32_t)(v154 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v156 >>> 0x40X) + (uint32_t)(v154 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v156 >>> 0x60X) + (uint32_t)(v154 >>> 0x60X)) << 96);
    __int128 v167 = (unsigned __int128)((uint32_t)v132 - (uint32_t)v133 + (uint32_t)v157) | ((unsigned __int128)((uint32_t)(v132 >>> 0x20X) - (uint32_t)(v133 >>> 0x20X) + (uint32_t)(v157 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v132 >>> 0x40X) - (uint32_t)(v133 >>> 0x40X) + (uint32_t)(v157 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v132 >>> 0x60X) - (uint32_t)(v133 >>> 0x60X) + (uint32_t)(v157 >>> 0x60X)) << 96);
    __int128 v168 = (unsigned __int128)((uint32_t)v155 + (uint32_t)v147) | ((unsigned __int128)((uint32_t)(v155 >>> 0x20X) + (uint32_t)(v147 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v155 >>> 0x40X) + (uint32_t)(v147 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v155 >>> 0x60X) + (uint32_t)(v147 >>> 0x60X)) << 96);
    __int128 v169 = (unsigned __int128)((uint32_t)v162 + (uint32_t)v160) | ((unsigned __int128)((uint32_t)(v162 >>> 0x20X) + (uint32_t)(v160 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v162 >>> 0x40X) + (uint32_t)(v160 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v162 >>> 0x60X) + (uint32_t)(v160 >>> 0x60X)) << 96);
    __int128 v170 = (unsigned __int128)((uint32_t)v138 - (uint32_t)v139 + (uint32_t)v163) | ((unsigned __int128)((uint32_t)(v138 >>> 0x20X) - (uint32_t)(v139 >>> 0x20X) + (uint32_t)(v163 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v138 >>> 0x40X) - (uint32_t)(v139 >>> 0x40X) + (uint32_t)(v163 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v138 >>> 0x60X) - (uint32_t)(v139 >>> 0x60X) + (uint32_t)(v163 >>> 0x60X)) << 96);
    __int128 v171 = (unsigned __int128)((uint32_t)v161 + (uint32_t)v152) | ((unsigned __int128)((uint32_t)(v161 >>> 0x20X) + (uint32_t)(v152 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v161 >>> 0x40X) + (uint32_t)(v152 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v161 >>> 0x60X) + (uint32_t)(v152 >>> 0x60X)) << 96);
    __int128 v172 = (unsigned __int128)((uint32_t)v166 + (uint32_t)v158) | ((unsigned __int128)((uint32_t)(v166 >>> 0x20X) + (uint32_t)(v158 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v166 >>> 0x40X) + (uint32_t)(v158 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v166 >>> 0x60X) + (uint32_t)(v158 >>> 0x60X)) << 96);
    __int128 v173 = (unsigned __int128)((uint32_t)v158 - (uint32_t)v166) | ((unsigned __int128)((uint32_t)(v158 >>> 0x20X) - (uint32_t)(v166 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v158 >>> 0x40X) - (uint32_t)(v166 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v158 >>> 0x60X) - (uint32_t)(v166 >>> 0x60X)) << 96);
    __int128 v174 = (unsigned __int128)(((uint32_t)v157 + (uint32_t)v155) * 0.70710677) | ((unsigned __int128)(((uint32_t)(v157 >>> 0x20X) + (uint32_t)(v155 >>> 0x20X)) * 0.70710677) << 32) | ((unsigned __int128)(((uint32_t)(v157 >>> 0x40X) + (uint32_t)(v155 >>> 0x40X)) * 0.70710677) << 64) | ((unsigned __int128)(((uint32_t)(v157 >>> 0x60X) + (uint32_t)(v155 >>> 0x60X)) * 0.70710677) << 96);
    __int128 v175 = (unsigned __int128)((uint32_t)v169 + (uint32_t)v164) | ((unsigned __int128)((uint32_t)(v169 >>> 0x20X) + (uint32_t)(v164 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v169 >>> 0x40X) + (uint32_t)(v164 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v169 >>> 0x60X) + (uint32_t)(v164 >>> 0x60X)) << 96);
    __int128 v176 = (unsigned __int128)((uint32_t)v164 - (uint32_t)v169) | ((unsigned __int128)((uint32_t)(v164 >>> 0x20X) - (uint32_t)(v169 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v164 >>> 0x40X) - (uint32_t)(v169 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v164 >>> 0x60X) - (uint32_t)(v169 >>> 0x60X)) << 96);
    __int128 v177 = (unsigned __int128)(((uint32_t)v167 - (uint32_t)v168) * 0.38268343) | ((unsigned __int128)(((uint32_t)(v167 >>> 0x20X) - (uint32_t)(v168 >>> 0x20X)) * 0.38268343) << 32) | ((unsigned __int128)(((uint32_t)(v167 >>> 0x40X) - (uint32_t)(v168 >>> 0x40X)) * 0.38268343) << 64) | ((unsigned __int128)(((uint32_t)(v167 >>> 0x60X) - (uint32_t)(v168 >>> 0x60X)) * 0.38268343) << 96);
    __int128 v178 = (unsigned __int128)(((uint32_t)v163 + (uint32_t)v161) * 0.70710677) | ((unsigned __int128)(((uint32_t)(v163 >>> 0x20X) + (uint32_t)(v161 >>> 0x20X)) * 0.70710677) << 32) | ((unsigned __int128)(((uint32_t)(v163 >>> 0x40X) + (uint32_t)(v161 >>> 0x40X)) * 0.70710677) << 64) | ((unsigned __int128)(((uint32_t)(v163 >>> 0x60X) + (uint32_t)(v161 >>> 0x60X)) * 0.70710677) << 96);
    __int128 v179 = (unsigned __int128)(((uint32_t)v154 - (uint32_t)v156 + (uint32_t)v159) * 0.70710677) | ((unsigned __int128)(((uint32_t)(v154 >>> 0x20X) - (uint32_t)(v156 >>> 0x20X) + (uint32_t)(v159 >>> 0x20X)) * 0.70710677) << 32) | ((unsigned __int128)(((uint32_t)(v154 >>> 0x40X) - (uint32_t)(v156 >>> 0x40X) + (uint32_t)(v159 >>> 0x40X)) * 0.70710677) << 64) | ((unsigned __int128)(((uint32_t)(v154 >>> 0x60X) - (uint32_t)(v156 >>> 0x60X) + (uint32_t)(v159 >>> 0x60X)) * 0.70710677) << 96);
    __int128 v180 = (unsigned __int128)((uint32_t)v147 + (uint32_t)v174) | ((unsigned __int128)((uint32_t)(v147 >>> 0x20X) + (uint32_t)(v174 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v147 >>> 0x40X) + (uint32_t)(v174 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v147 >>> 0x60X) + (uint32_t)(v174 >>> 0x60X)) << 96);
    __int128 v181 = (unsigned __int128)((uint32_t)v147 - (uint32_t)v174) | ((unsigned __int128)((uint32_t)(v147 >>> 0x20X) - (uint32_t)(v174 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v147 >>> 0x40X) - (uint32_t)(v174 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v147 >>> 0x60X) - (uint32_t)(v174 >>> 0x60X)) << 96);
    __int128 v182 = (unsigned __int128)(((uint32_t)v160 - (uint32_t)v162 + (uint32_t)v165) * 0.70710677) | ((unsigned __int128)(((uint32_t)(v160 >>> 0x20X) - (uint32_t)(v162 >>> 0x20X) + (uint32_t)(v165 >>> 0x20X)) * 0.70710677) << 32) | ((unsigned __int128)(((uint32_t)(v160 >>> 0x40X) - (uint32_t)(v162 >>> 0x40X) + (uint32_t)(v165 >>> 0x40X)) * 0.70710677) << 64) | ((unsigned __int128)(((uint32_t)(v160 >>> 0x60X) - (uint32_t)(v162 >>> 0x60X) + (uint32_t)(v165 >>> 0x60X)) * 0.70710677) << 96);
    __int128 v183 = (unsigned __int128)(((uint32_t)v170 - (uint32_t)v171) * 0.38268343) | ((unsigned __int128)(((uint32_t)(v170 >>> 0x20X) - (uint32_t)(v171 >>> 0x20X)) * 0.38268343) << 32) | ((unsigned __int128)(((uint32_t)(v170 >>> 0x40X) - (uint32_t)(v171 >>> 0x40X)) * 0.38268343) << 64) | ((unsigned __int128)(((uint32_t)(v170 >>> 0x60X) - (uint32_t)(v171 >>> 0x60X)) * 0.38268343) << 96);
    __int128 v184 = (unsigned __int128)((uint32_t)v167 * 0.5411961 + (uint32_t)v177) | ((unsigned __int128)((uint32_t)(v167 >>> 0x20X) * 0.5411961 + (uint32_t)(v177 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v167 >>> 0x40X) * 0.5411961 + (uint32_t)(v177 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v167 >>> 0x60X) * 0.5411961 + (uint32_t)(v177 >>> 0x60X)) << 96);
    __int128 v185 = (unsigned __int128)((uint32_t)v168 * 1.306563 + (uint32_t)v177) | ((unsigned __int128)((uint32_t)(v168 >>> 0x20X) * 1.306563 + (uint32_t)(v177 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v168 >>> 0x40X) * 1.306563 + (uint32_t)(v177 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v168 >>> 0x60X) * 1.306563 + (uint32_t)(v177 >>> 0x60X)) << 96);
    __int128 v186 = (unsigned __int128)((uint32_t)v152 + (uint32_t)v178) | ((unsigned __int128)((uint32_t)(v152 >>> 0x20X) + (uint32_t)(v178 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v152 >>> 0x40X) + (uint32_t)(v178 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v152 >>> 0x60X) + (uint32_t)(v178 >>> 0x60X)) << 96);
    __int128 v187 = (unsigned __int128)((uint32_t)v152 - (uint32_t)v178) | ((unsigned __int128)((uint32_t)(v152 >>> 0x20X) - (uint32_t)(v178 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v152 >>> 0x40X) - (uint32_t)(v178 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v152 >>> 0x60X) - (uint32_t)(v178 >>> 0x60X)) << 96);
    __int128 v188 = (unsigned __int128)((uint32_t)v159 + (uint32_t)v179) | ((unsigned __int128)((uint32_t)(v159 >>> 0x20X) + (uint32_t)(v179 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v159 >>> 0x40X) + (uint32_t)(v179 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v159 >>> 0x60X) + (uint32_t)(v179 >>> 0x60X)) << 96);
    __int128 v189 = (unsigned __int128)((uint32_t)v159 - (uint32_t)v179) | ((unsigned __int128)((uint32_t)(v159 >>> 0x20X) - (uint32_t)(v179 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v159 >>> 0x40X) - (uint32_t)(v179 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v159 >>> 0x60X) - (uint32_t)(v179 >>> 0x60X)) << 96);
    __int128 v190 = (unsigned __int128)((uint32_t)v165 + (uint32_t)v182) | ((unsigned __int128)((uint32_t)(v165 >>> 0x20X) + (uint32_t)(v182 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v165 >>> 0x40X) + (uint32_t)(v182 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v165 >>> 0x60X) + (uint32_t)(v182 >>> 0x60X)) << 96);
    __int128 v191 = (unsigned __int128)((uint32_t)v165 - (uint32_t)v182) | ((unsigned __int128)((uint32_t)(v165 >>> 0x20X) - (uint32_t)(v182 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v165 >>> 0x40X) - (uint32_t)(v182 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v165 >>> 0x60X) - (uint32_t)(v182 >>> 0x60X)) << 96);
    __int128 v192 = (unsigned __int128)((uint32_t)v170 * 0.5411961 + (uint32_t)v183) | ((unsigned __int128)((uint32_t)(v170 >>> 0x20X) * 0.5411961 + (uint32_t)(v183 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v170 >>> 0x40X) * 0.5411961 + (uint32_t)(v183 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v170 >>> 0x60X) * 0.5411961 + (uint32_t)(v183 >>> 0x60X)) << 96);
    __int128 v193 = (unsigned __int128)((uint32_t)v171 * 1.306563 + (uint32_t)v183) | ((unsigned __int128)((uint32_t)(v171 >>> 0x20X) * 1.306563 + (uint32_t)(v183 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v171 >>> 0x40X) * 1.306563 + (uint32_t)(v183 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v171 >>> 0x60X) * 1.306563 + (uint32_t)(v183 >>> 0x60X)) << 96);
    __int128 v194 = (unsigned __int128)((uint32_t)v181 - (uint32_t)v184) | ((unsigned __int128)((uint32_t)(v181 >>> 0x20X) - (uint32_t)(v184 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v181 >>> 0x40X) - (uint32_t)(v184 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v181 >>> 0x60X) - (uint32_t)(v184 >>> 0x60X)) << 96);
    __int128 v195 = (unsigned __int128)((uint32_t)v180 - (uint32_t)v185) | ((unsigned __int128)((uint32_t)(v180 >>> 0x20X) - (uint32_t)(v185 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v180 >>> 0x40X) - (uint32_t)(v185 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v180 >>> 0x60X) - (uint32_t)(v185 >>> 0x60X)) << 96);
    __int128 v196 = (unsigned __int128)((uint32_t)v187 - (uint32_t)v192) | ((unsigned __int128)((uint32_t)(v187 >>> 0x20X) - (uint32_t)(v192 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v187 >>> 0x40X) - (uint32_t)(v192 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v187 >>> 0x60X) - (uint32_t)(v192 >>> 0x60X)) << 96);
    __int128 v197 = (unsigned __int128)((uint32_t)v186 - (uint32_t)v193) | ((unsigned __int128)((uint32_t)(v186 >>> 0x20X) - (uint32_t)(v193 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v186 >>> 0x40X) - (uint32_t)(v193 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v186 >>> 0x60X) - (uint32_t)(v193 >>> 0x60X)) << 96);
    TRN2(v177, v172, (unsigned __int128)((uint32_t)v180 + (uint32_t)v185) | ((unsigned __int128)((uint32_t)(v180 >>> 0x20X) + (uint32_t)(v185 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v180 >>> 0x40X) + (uint32_t)(v185 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v180 >>> 0x60X) + (uint32_t)(v185 >>> 0x60X)) << 96));
    TRN2(v117, v189, v195);
    TRN2(v118, v191, v197);
    __int128 v198 = (unsigned __int128)(((__SyntheticTypeUnknownU)v189 | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)v189 | ((unsigned __int128)(uint32_t)v195 << 32) | ((unsigned __int128)(uint32_t)(v189 >>> 0x20X) << 64) | ((unsigned __int128)(uint32_t)(v195 >>> 0x20X) << 96)) << 128)) >>> 0x40X);
    __int128 v199 = (unsigned __int128)(((__SyntheticTypeUnknownU)v189 | ((__SyntheticTypeUnknownU)v117 << 128)) >>> 0x40X);
    TRN2(v197, v188, v194);
    __int128 v200 = (unsigned __int128)(((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)(v188 >>> 0x40X) | ((unsigned __int128)(uint32_t)(v194 >>> 0x40X) << 32) | ((unsigned __int128)(uint32_t)(v188 >>> 0x60X) << 64) | ((unsigned __int128)(uint32_t)(v194 >>> 0x60X) << 96)) | ((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v177 | ((__SyntheticTypeUnknownU)v172 << 128)) >>> 0x40X) << 128)) >>> 0x40X);
    TRN2(v194, v173, (unsigned __int128)((uint32_t)v181 + (uint32_t)v184) | ((unsigned __int128)((uint32_t)(v181 >>> 0x20X) + (uint32_t)(v184 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v181 >>> 0x40X) + (uint32_t)(v184 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v181 >>> 0x60X) + (uint32_t)(v184 >>> 0x60X)) << 96));
    __int128 v201 = (unsigned __int128)(((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v188 | ((__SyntheticTypeUnknownU)v197 << 128)) >>> 0x40X) | ((__SyntheticTypeUnknownU)v177 << 128)) >>> 0x40X);
    __int128 v202 = (unsigned __int128)(((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)(v189 >>> 0x40X) | ((unsigned __int128)(uint32_t)(v195 >>> 0x40X) << 32) | ((unsigned __int128)(uint32_t)(v189 >>> 0x60X) << 64) | ((unsigned __int128)(uint32_t)(v195 >>> 0x60X) << 96)) | ((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v194 | ((__SyntheticTypeUnknownU)v173 << 128)) >>> 0x40X) << 128)) >>> 0x40X);
    __int128 v203 = (unsigned __int128)(((__SyntheticTypeUnknownU)v199 | ((__SyntheticTypeUnknownU)v194 << 128)) >>> 0x40X);
    TRN2(v199, v190, v196);
    __int128 v204 = (unsigned __int128)(((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v188 | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)v188 | ((unsigned __int128)(uint32_t)v194 << 32) | ((unsigned __int128)(uint32_t)(v188 >>> 0x20X) << 64) | ((unsigned __int128)(uint32_t)(v194 >>> 0x20X) << 96)) << 128)) >>> 0x40X) | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)v172 | ((unsigned __int128)(uint32_t)((unsigned __int128)((uint32_t)v180 + (uint32_t)v185) | ((unsigned __int128)((uint32_t)(v180 >>> 0x20X) + (uint32_t)(v185 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v180 >>> 0x40X) + (uint32_t)(v185 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v180 >>> 0x60X) + (uint32_t)(v185 >>> 0x60X)) << 96)) << 32) | ((unsigned __int128)(uint32_t)(v172 >>> 0x20X) << 64) | ((unsigned __int128)(uint32_t)(((unsigned __int128)((uint32_t)v180 + (uint32_t)v185) | ((unsigned __int128)((uint32_t)(v180 >>> 0x20X) + (uint32_t)(v185 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v180 >>> 0x40X) + (uint32_t)(v185 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v180 >>> 0x60X) + (uint32_t)(v185 >>> 0x60X)) << 96)) >>> 0x20X) << 96)) << 128)) >>> 0x40X);
    __int128 v205 = (unsigned __int128)(((__SyntheticTypeUnknownU)v198 | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)v173 | ((unsigned __int128)(uint32_t)((unsigned __int128)((uint32_t)v181 + (uint32_t)v184) | ((unsigned __int128)((uint32_t)(v181 >>> 0x20X) + (uint32_t)(v184 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v181 >>> 0x40X) + (uint32_t)(v184 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v181 >>> 0x60X) + (uint32_t)(v184 >>> 0x60X)) << 96)) << 32) | ((unsigned __int128)(uint32_t)(v173 >>> 0x20X) << 64) | ((unsigned __int128)(uint32_t)(((unsigned __int128)((uint32_t)v181 + (uint32_t)v184) | ((unsigned __int128)((uint32_t)(v181 >>> 0x20X) + (uint32_t)(v184 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v181 >>> 0x40X) + (uint32_t)(v184 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v181 >>> 0x60X) + (uint32_t)(v184 >>> 0x60X)) << 96)) >>> 0x20X) << 96)) << 128)) >>> 0x40X);
    TRN2(v198, v175, (unsigned __int128)((uint32_t)v186 + (uint32_t)v193) | ((unsigned __int128)((uint32_t)(v186 >>> 0x20X) + (uint32_t)(v193 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v186 >>> 0x40X) + (uint32_t)(v193 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v186 >>> 0x60X) + (uint32_t)(v193 >>> 0x60X)) << 96));
    __int128 v206 = (unsigned __int128)(((__SyntheticTypeUnknownU)((unsigned __int128)(v189 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(uint32_t)(v195 >>> 0x40X) << 96)) | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)(v173 >>> 0x40X) | ((unsigned __int128)(uint32_t)(((unsigned __int128)((uint32_t)v181 + (uint32_t)v184) | ((unsigned __int128)((uint32_t)(v181 >>> 0x20X) + (uint32_t)(v184 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v181 >>> 0x40X) + (uint32_t)(v184 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v181 >>> 0x60X) + (uint32_t)(v184 >>> 0x60X)) << 96)) >>> 0x40X) << 32) | ((unsigned __int128)(uint32_t)(v173 >>> 0x60X) << 64) | ((unsigned __int128)(uint32_t)(((unsigned __int128)((uint32_t)v181 + (uint32_t)v184) | ((unsigned __int128)((uint32_t)(v181 >>> 0x20X) + (uint32_t)(v184 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v181 >>> 0x40X) + (uint32_t)(v184 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v181 >>> 0x60X) + (uint32_t)(v184 >>> 0x60X)) << 96)) >>> 0x60X) << 96)) << 128)) >>> 0x40X);
    __int128 v207 = (unsigned __int128)(((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v190 | ((__SyntheticTypeUnknownU)v199 << 128)) >>> 0x40X) | ((__SyntheticTypeUnknownU)v198 << 128)) >>> 0x40X);
    TRN2(v198, v176, (unsigned __int128)((uint32_t)v187 + (uint32_t)v192) | ((unsigned __int128)((uint32_t)(v187 >>> 0x20X) + (uint32_t)(v192 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v187 >>> 0x40X) + (uint32_t)(v192 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v187 >>> 0x60X) + (uint32_t)(v192 >>> 0x60X)) << 96));
    __int128 v208 = (unsigned __int128)(((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v190 | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)v190 | ((unsigned __int128)(uint32_t)v196 << 32) | ((unsigned __int128)(uint32_t)(v190 >>> 0x20X) << 64) | ((unsigned __int128)(uint32_t)(v196 >>> 0x20X) << 96)) << 128)) >>> 0x40X) | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)v175 | ((unsigned __int128)(uint32_t)((unsigned __int128)((uint32_t)v186 + (uint32_t)v193) | ((unsigned __int128)((uint32_t)(v186 >>> 0x20X) + (uint32_t)(v193 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v186 >>> 0x40X) + (uint32_t)(v193 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v186 >>> 0x60X) + (uint32_t)(v193 >>> 0x60X)) << 96)) << 32) | ((unsigned __int128)(uint32_t)(v175 >>> 0x20X) << 64) | ((unsigned __int128)(uint32_t)(((unsigned __int128)((uint32_t)v186 + (uint32_t)v193) | ((unsigned __int128)((uint32_t)(v186 >>> 0x20X) + (uint32_t)(v193 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v186 >>> 0x40X) + (uint32_t)(v193 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v186 >>> 0x60X) + (uint32_t)(v193 >>> 0x60X)) << 96)) >>> 0x20X) << 96)) << 128)) >>> 0x40X);
    __int128 v209 = (unsigned __int128)(((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)(v190 >>> 0x40X) | ((unsigned __int128)(uint32_t)(v196 >>> 0x40X) << 32) | ((unsigned __int128)(uint32_t)(v190 >>> 0x60X) << 64) | ((unsigned __int128)(uint32_t)(v196 >>> 0x60X) << 96)) | ((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v198 | ((__SyntheticTypeUnknownU)v175 << 128)) >>> 0x40X) << 128)) >>> 0x40X);
    __int128 v210 = (unsigned __int128)(((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v191 | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)v191 | ((unsigned __int128)(uint32_t)v197 << 32) | ((unsigned __int128)(uint32_t)(v191 >>> 0x20X) << 64) | ((unsigned __int128)(uint32_t)(v197 >>> 0x20X) << 96)) << 128)) >>> 0x40X) | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)v176 | ((unsigned __int128)(uint32_t)((unsigned __int128)((uint32_t)v187 + (uint32_t)v192) | ((unsigned __int128)((uint32_t)(v187 >>> 0x20X) + (uint32_t)(v192 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v187 >>> 0x40X) + (uint32_t)(v192 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v187 >>> 0x60X) + (uint32_t)(v192 >>> 0x60X)) << 96)) << 32) | ((unsigned __int128)(uint32_t)(v176 >>> 0x20X) << 64) | ((unsigned __int128)(uint32_t)(((unsigned __int128)((uint32_t)v187 + (uint32_t)v192) | ((unsigned __int128)((uint32_t)(v187 >>> 0x20X) + (uint32_t)(v192 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v187 >>> 0x40X) + (uint32_t)(v192 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v187 >>> 0x60X) + (uint32_t)(v192 >>> 0x60X)) << 96)) >>> 0x20X) << 96)) << 128)) >>> 0x40X);
    __int128 v211 = (unsigned __int128)(((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v191 | ((__SyntheticTypeUnknownU)v118 << 128)) >>> 0x40X) | ((__SyntheticTypeUnknownU)v198 << 128)) >>> 0x40X);
    __int128 v212 = (unsigned __int128)(((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)(v191 >>> 0x40X) | ((unsigned __int128)(uint32_t)(v197 >>> 0x40X) << 32) | ((unsigned __int128)(uint32_t)(v191 >>> 0x60X) << 64) | ((unsigned __int128)(uint32_t)(v197 >>> 0x60X) << 96)) | ((__SyntheticTypeUnknownU)(unsigned __int128)(((__SyntheticTypeUnknownU)v198 | ((__SyntheticTypeUnknownU)v176 << 128)) >>> 0x40X) << 128)) >>> 0x40X);
    __int128 v213 = (unsigned __int128)(((__SyntheticTypeUnknownU)((unsigned __int128)(v191 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(uint32_t)(v197 >>> 0x40X) << 96)) | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)(v176 >>> 0x40X) | ((unsigned __int128)(uint32_t)(((unsigned __int128)((uint32_t)v187 + (uint32_t)v192) | ((unsigned __int128)((uint32_t)(v187 >>> 0x20X) + (uint32_t)(v192 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v187 >>> 0x40X) + (uint32_t)(v192 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v187 >>> 0x60X) + (uint32_t)(v192 >>> 0x60X)) << 96)) >>> 0x40X) << 32) | ((unsigned __int128)(uint32_t)(v176 >>> 0x60X) << 64) | ((unsigned __int128)(uint32_t)(((unsigned __int128)((uint32_t)v187 + (uint32_t)v192) | ((unsigned __int128)((uint32_t)(v187 >>> 0x20X) + (uint32_t)(v192 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v187 >>> 0x40X) + (uint32_t)(v192 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v187 >>> 0x60X) + (uint32_t)(v192 >>> 0x60X)) << 96)) >>> 0x60X) << 96)) << 128)) >>> 0x40X);
    __int128 v214 = (unsigned __int128)(((__SyntheticTypeUnknownU)((unsigned __int128)(v188 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(uint32_t)(v194 >>> 0x40X) << 96)) | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)(v172 >>> 0x40X) | ((unsigned __int128)(uint32_t)(((unsigned __int128)((uint32_t)v180 + (uint32_t)v185) | ((unsigned __int128)((uint32_t)(v180 >>> 0x20X) + (uint32_t)(v185 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v180 >>> 0x40X) + (uint32_t)(v185 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v180 >>> 0x60X) + (uint32_t)(v185 >>> 0x60X)) << 96)) >>> 0x40X) << 32) | ((unsigned __int128)(uint32_t)(v172 >>> 0x60X) << 64) | ((unsigned __int128)(uint32_t)(((unsigned __int128)((uint32_t)v180 + (uint32_t)v185) | ((unsigned __int128)((uint32_t)(v180 >>> 0x20X) + (uint32_t)(v185 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v180 >>> 0x40X) + (uint32_t)(v185 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v180 >>> 0x60X) + (uint32_t)(v185 >>> 0x60X)) << 96)) >>> 0x60X) << 96)) << 128)) >>> 0x40X);
    __int128 v215 = (unsigned __int128)(((__SyntheticTypeUnknownU)((unsigned __int128)(v190 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(uint32_t)(v196 >>> 0x40X) << 96)) | ((__SyntheticTypeUnknownU)((unsigned __int128)(uint32_t)(v175 >>> 0x40X) | ((unsigned __int128)(uint32_t)(((unsigned __int128)((uint32_t)v186 + (uint32_t)v193) | ((unsigned __int128)((uint32_t)(v186 >>> 0x20X) + (uint32_t)(v193 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v186 >>> 0x40X) + (uint32_t)(v193 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v186 >>> 0x60X) + (uint32_t)(v193 >>> 0x60X)) << 96)) >>> 0x40X) << 32) | ((unsigned __int128)(uint32_t)(v175 >>> 0x60X) << 64) | ((unsigned __int128)(uint32_t)(((unsigned __int128)((uint32_t)v186 + (uint32_t)v193) | ((unsigned __int128)((uint32_t)(v186 >>> 0x20X) + (uint32_t)(v193 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v186 >>> 0x40X) + (uint32_t)(v193 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v186 >>> 0x60X) + (uint32_t)(v193 >>> 0x60X)) << 96)) >>> 0x60X) << 96)) << 128)) >>> 0x40X);
    __int128 v216 = (unsigned __int128)(((__SyntheticTypeUnknownU)v200 | ((__SyntheticTypeUnknownU)v200 << 128)) >>> 0x40X);
    __int128 v217 = (unsigned __int128)(((__SyntheticTypeUnknownU)v201 | ((__SyntheticTypeUnknownU)v201 << 128)) >>> 0x40X);
    __int128 v218 = (unsigned __int128)(((__SyntheticTypeUnknownU)v204 | ((__SyntheticTypeUnknownU)v204 << 128)) >>> 0x40X);
    long double v219 = (long double)(((__SyntheticTypeUnknownU)v202 | ((__SyntheticTypeUnknownU)v202 << 128)) >>> 0x40X);
    long double v220 = (long double)(((__SyntheticTypeUnknownU)v205 | ((__SyntheticTypeUnknownU)v205 << 128)) >>> 0x40X);
    long double v221 = (long double)(((__SyntheticTypeUnknownU)v203 | ((__SyntheticTypeUnknownU)v203 << 128)) >>> 0x40X);
    long double v222 = (long double)(((__SyntheticTypeUnknownU)v206 | ((__SyntheticTypeUnknownU)v206 << 128)) >>> 0x40X);
    __int128 v223 = (unsigned __int128)(((__SyntheticTypeUnknownU)v208 | ((__SyntheticTypeUnknownU)v208 << 128)) >>> 0x40X);
    __int128 v224 = (unsigned __int128)(((__SyntheticTypeUnknownU)v207 | ((__SyntheticTypeUnknownU)v207 << 128)) >>> 0x40X);
    __int128 v225 = (unsigned __int128)(((__SyntheticTypeUnknownU)v209 | ((__SyntheticTypeUnknownU)v209 << 128)) >>> 0x40X);
    long double v226 = (long double)(((__SyntheticTypeUnknownU)v210 | ((__SyntheticTypeUnknownU)v210 << 128)) >>> 0x40X);
    long double v227 = (long double)(((__SyntheticTypeUnknownU)v211 | ((__SyntheticTypeUnknownU)v211 << 128)) >>> 0x40X);
    long double v228 = (long double)(((__SyntheticTypeUnknownU)v212 | ((__SyntheticTypeUnknownU)v212 << 128)) >>> 0x40X);
    long double v229 = (long double)(((__SyntheticTypeUnknownU)v213 | ((__SyntheticTypeUnknownU)v213 << 128)) >>> 0x40X);
    __int128 v230 = (unsigned __int128)(((__SyntheticTypeUnknownU)v214 | ((__SyntheticTypeUnknownU)v214 << 128)) >>> 0x40X);
    __int128 v231 = (unsigned __int128)(((__SyntheticTypeUnknownU)v215 | ((__SyntheticTypeUnknownU)v215 << 128)) >>> 0x40X);
    *(param3 + 0xF) = v228;
    __int128 v232 = (unsigned __int128)((uint32_t)v218 + (uint32_t)v225) | ((unsigned __int128)((uint32_t)(v218 >>> 0x20X) + (uint32_t)(v225 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v218 >>> 0x40X) + (uint32_t)(v225 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v218 >>> 0x60X) + (uint32_t)(v225 >>> 0x60X)) << 96);
    __int128 v233 = (unsigned __int128)((uint32_t)v218 - (uint32_t)v225) | ((unsigned __int128)((uint32_t)(v218 >>> 0x20X) - (uint32_t)(v225 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v218 >>> 0x40X) - (uint32_t)(v225 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v218 >>> 0x60X) - (uint32_t)(v225 >>> 0x60X)) << 96);
    __int128 v234 = (unsigned __int128)((uint32_t)v216 + (uint32_t)v223) | ((unsigned __int128)((uint32_t)(v216 >>> 0x20X) + (uint32_t)(v223 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v216 >>> 0x40X) + (uint32_t)(v223 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v216 >>> 0x60X) + (uint32_t)(v223 >>> 0x60X)) << 96);
    __int128 v235 = (unsigned __int128)((uint32_t)v220 + (uint32_t)v228) | ((unsigned __int128)((uint32_t)(v220 >>> 0x20X) + (uint32_t)(v228 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v220 >>> 0x40X) + (uint32_t)(v228 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v220 >>> 0x60X) + (uint32_t)(v228 >>> 0x60X)) << 96);
    __int128 v236 = (unsigned __int128)((uint32_t)v220 - (uint32_t)v228) | ((unsigned __int128)((uint32_t)(v220 >>> 0x20X) - (uint32_t)(v228 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v220 >>> 0x40X) - (uint32_t)(v228 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v220 >>> 0x60X) - (uint32_t)(v228 >>> 0x60X)) << 96);
    __int128 v237 = (unsigned __int128)((uint32_t)v221 + (uint32_t)v229) | ((unsigned __int128)((uint32_t)(v221 >>> 0x20X) + (uint32_t)(v229 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v221 >>> 0x40X) + (uint32_t)(v229 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v221 >>> 0x60X) + (uint32_t)(v229 >>> 0x60X)) << 96);
    __int128 v238 = (unsigned __int128)((uint32_t)v222 + (uint32_t)v227) | ((unsigned __int128)((uint32_t)(v222 >>> 0x20X) + (uint32_t)(v227 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v222 >>> 0x40X) + (uint32_t)(v227 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v222 >>> 0x60X) + (uint32_t)(v227 >>> 0x60X)) << 96);
    __int128 v239 = (unsigned __int128)((uint32_t)v219 + (uint32_t)v226) | ((unsigned __int128)((uint32_t)(v219 >>> 0x20X) + (uint32_t)(v226 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v219 >>> 0x40X) + (uint32_t)(v226 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v219 >>> 0x60X) + (uint32_t)(v226 >>> 0x60X)) << 96);
    __int128 v240 = (unsigned __int128)((uint32_t)v217 + (uint32_t)v231) | ((unsigned __int128)((uint32_t)(v217 >>> 0x20X) + (uint32_t)(v231 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v217 >>> 0x40X) + (uint32_t)(v231 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v217 >>> 0x60X) + (uint32_t)(v231 >>> 0x60X)) << 96);
    __int128 v241 = (unsigned __int128)((uint32_t)v217 - (uint32_t)v231) | ((unsigned __int128)((uint32_t)(v217 >>> 0x20X) - (uint32_t)(v231 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v217 >>> 0x40X) - (uint32_t)(v231 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v217 >>> 0x60X) - (uint32_t)(v231 >>> 0x60X)) << 96);
    __int128 v242 = (unsigned __int128)((uint32_t)v230 + (uint32_t)v224) | ((unsigned __int128)((uint32_t)(v230 >>> 0x20X) + (uint32_t)(v224 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v230 >>> 0x40X) + (uint32_t)(v224 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v230 >>> 0x60X) + (uint32_t)(v224 >>> 0x60X)) << 96);
    __int128 v243 = (unsigned __int128)((uint32_t)v230 - (uint32_t)v224) | ((unsigned __int128)((uint32_t)(v230 >>> 0x20X) - (uint32_t)(v224 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v230 >>> 0x40X) - (uint32_t)(v224 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v230 >>> 0x60X) - (uint32_t)(v224 >>> 0x60X)) << 96);
    __int128 v244 = (unsigned __int128)((uint32_t)v234 + (uint32_t)v232) | ((unsigned __int128)((uint32_t)(v234 >>> 0x20X) + (uint32_t)(v232 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v234 >>> 0x40X) + (uint32_t)(v232 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v234 >>> 0x60X) + (uint32_t)(v232 >>> 0x60X)) << 96);
    __int128 v245 = (unsigned __int128)((uint32_t)v232 - (uint32_t)v234) | ((unsigned __int128)((uint32_t)(v232 >>> 0x20X) - (uint32_t)(v234 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v232 >>> 0x40X) - (uint32_t)(v234 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v232 >>> 0x60X) - (uint32_t)(v234 >>> 0x60X)) << 96);
    __int128 v246 = (unsigned __int128)((uint32_t)v239 + (uint32_t)v235) | ((unsigned __int128)((uint32_t)(v239 >>> 0x20X) + (uint32_t)(v235 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v239 >>> 0x40X) + (uint32_t)(v235 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v239 >>> 0x60X) + (uint32_t)(v235 >>> 0x60X)) << 96);
    __int128 v247 = (unsigned __int128)((uint32_t)v235 - (uint32_t)v239) | ((unsigned __int128)((uint32_t)(v235 >>> 0x20X) - (uint32_t)(v239 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v235 >>> 0x40X) - (uint32_t)(v239 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v235 >>> 0x60X) - (uint32_t)(v239 >>> 0x60X)) << 96);
    __int128 v248 = (unsigned __int128)((uint32_t)v238 + (uint32_t)v237) | ((unsigned __int128)((uint32_t)(v238 >>> 0x20X) + (uint32_t)(v237 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v238 >>> 0x40X) + (uint32_t)(v237 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v238 >>> 0x60X) + (uint32_t)(v237 >>> 0x60X)) << 96);
    __int128 v249 = (unsigned __int128)((uint32_t)v219 - (uint32_t)v226 + ((uint32_t)v222 - (uint32_t)v227)) | ((unsigned __int128)((uint32_t)(v219 >>> 0x20X) - (uint32_t)(v226 >>> 0x20X) + ((uint32_t)(v222 >>> 0x20X) - (uint32_t)(v227 >>> 0x20X))) << 32) | ((unsigned __int128)((uint32_t)(v219 >>> 0x40X) - (uint32_t)(v226 >>> 0x40X) + ((uint32_t)(v222 >>> 0x40X) - (uint32_t)(v227 >>> 0x40X))) << 64) | ((unsigned __int128)((uint32_t)(v219 >>> 0x60X) - (uint32_t)(v226 >>> 0x60X) + ((uint32_t)(v222 >>> 0x60X) - (uint32_t)(v227 >>> 0x60X))) << 96);
    __int128 v250 = (unsigned __int128)((uint32_t)v221 - (uint32_t)v229 + (uint32_t)v236) | ((unsigned __int128)((uint32_t)(v221 >>> 0x20X) - (uint32_t)(v229 >>> 0x20X) + (uint32_t)(v236 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v221 >>> 0x40X) - (uint32_t)(v229 >>> 0x40X) + (uint32_t)(v236 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v221 >>> 0x60X) - (uint32_t)(v229 >>> 0x60X) + (uint32_t)(v236 >>> 0x60X)) << 96);
    __int128 v251 = (unsigned __int128)((uint32_t)v242 + (uint32_t)v240) | ((unsigned __int128)((uint32_t)(v242 >>> 0x20X) + (uint32_t)(v240 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v242 >>> 0x40X) + (uint32_t)(v240 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v242 >>> 0x60X) + (uint32_t)(v240 >>> 0x60X)) << 96);
    __int128 v252 = (unsigned __int128)((uint32_t)v216 - (uint32_t)v223 + (uint32_t)v243) | ((unsigned __int128)((uint32_t)(v216 >>> 0x20X) - (uint32_t)(v223 >>> 0x20X) + (uint32_t)(v243 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v216 >>> 0x40X) - (uint32_t)(v223 >>> 0x40X) + (uint32_t)(v243 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v216 >>> 0x60X) - (uint32_t)(v223 >>> 0x60X) + (uint32_t)(v243 >>> 0x60X)) << 96);
    __int128 v253 = (unsigned __int128)((uint32_t)v241 + (uint32_t)v233) | ((unsigned __int128)((uint32_t)(v241 >>> 0x20X) + (uint32_t)(v233 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v241 >>> 0x40X) + (uint32_t)(v233 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v241 >>> 0x60X) + (uint32_t)(v233 >>> 0x60X)) << 96);
    __int128 v254 = (unsigned __int128)(((uint32_t)v222 - (uint32_t)v227 + ((uint32_t)v221 - (uint32_t)v229)) * 0.70710677) | ((unsigned __int128)(((uint32_t)(v222 >>> 0x20X) - (uint32_t)(v227 >>> 0x20X) + ((uint32_t)(v221 >>> 0x20X) - (uint32_t)(v229 >>> 0x20X))) * 0.70710677) << 32) | ((unsigned __int128)(((uint32_t)(v222 >>> 0x40X) - (uint32_t)(v227 >>> 0x40X) + ((uint32_t)(v221 >>> 0x40X) - (uint32_t)(v229 >>> 0x40X))) * 0.70710677) << 64) | ((unsigned __int128)(((uint32_t)(v222 >>> 0x60X) - (uint32_t)(v227 >>> 0x60X) + ((uint32_t)(v221 >>> 0x60X) - (uint32_t)(v229 >>> 0x60X))) * 0.70710677) << 96);
    __int128 v255 = (unsigned __int128)((uint32_t)v236 + ((uint32_t)v222 - (uint32_t)v227 + ((uint32_t)v221 - (uint32_t)v229)) * 0.70710677) | ((unsigned __int128)((uint32_t)(v236 >>> 0x20X) + (uint32_t)(v254 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v236 >>> 0x40X) + (uint32_t)(v254 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v236 >>> 0x60X) + (uint32_t)(v254 >>> 0x60X)) << 96);
    __int128 v256 = (unsigned __int128)((uint32_t)v236 - (uint32_t)v254) | ((unsigned __int128)((uint32_t)(v236 >>> 0x20X) - (uint32_t)(v254 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v236 >>> 0x40X) - (uint32_t)(v254 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v236 >>> 0x60X) - (uint32_t)(v254 >>> 0x60X)) << 96);
    __int128 v257 = (unsigned __int128)(((uint32_t)v243 + (uint32_t)v241) * 0.70710677) | ((unsigned __int128)(((uint32_t)(v243 >>> 0x20X) + (uint32_t)(v241 >>> 0x20X)) * 0.70710677) << 32) | ((unsigned __int128)(((uint32_t)(v243 >>> 0x40X) + (uint32_t)(v241 >>> 0x40X)) * 0.70710677) << 64) | ((unsigned __int128)(((uint32_t)(v243 >>> 0x60X) + (uint32_t)(v241 >>> 0x60X)) * 0.70710677) << 96);
    __int128 v258 = (unsigned __int128)(((uint32_t)v237 - (uint32_t)v238 + (uint32_t)v247) * 0.70710677) | ((unsigned __int128)(((uint32_t)(v237 >>> 0x20X) - (uint32_t)(v238 >>> 0x20X) + (uint32_t)(v247 >>> 0x20X)) * 0.70710677) << 32) | ((unsigned __int128)(((uint32_t)(v237 >>> 0x40X) - (uint32_t)(v238 >>> 0x40X) + (uint32_t)(v247 >>> 0x40X)) * 0.70710677) << 64) | ((unsigned __int128)(((uint32_t)(v237 >>> 0x60X) - (uint32_t)(v238 >>> 0x60X) + (uint32_t)(v247 >>> 0x60X)) * 0.70710677) << 96);
    __int128 v259 = (unsigned __int128)(((uint32_t)v240 - (uint32_t)v242 + (uint32_t)v245) * 0.70710677) | ((unsigned __int128)(((uint32_t)(v240 >>> 0x20X) - (uint32_t)(v242 >>> 0x20X) + (uint32_t)(v245 >>> 0x20X)) * 0.70710677) << 32) | ((unsigned __int128)(((uint32_t)(v240 >>> 0x40X) - (uint32_t)(v242 >>> 0x40X) + (uint32_t)(v245 >>> 0x40X)) * 0.70710677) << 64) | ((unsigned __int128)(((uint32_t)(v240 >>> 0x60X) - (uint32_t)(v242 >>> 0x60X) + (uint32_t)(v245 >>> 0x60X)) * 0.70710677) << 96);
    __int128 v260 = (unsigned __int128)(((uint32_t)v249 - (uint32_t)v250) * 0.38268343) | ((unsigned __int128)(((uint32_t)(v249 >>> 0x20X) - (uint32_t)(v250 >>> 0x20X)) * 0.38268343) << 32) | ((unsigned __int128)(((uint32_t)(v249 >>> 0x40X) - (uint32_t)(v250 >>> 0x40X)) * 0.38268343) << 64) | ((unsigned __int128)(((uint32_t)(v249 >>> 0x60X) - (uint32_t)(v250 >>> 0x60X)) * 0.38268343) << 96);
    __int128 v261 = (unsigned __int128)(((uint32_t)v252 - (uint32_t)v253) * 0.38268343) | ((unsigned __int128)(((uint32_t)(v252 >>> 0x20X) - (uint32_t)(v253 >>> 0x20X)) * 0.38268343) << 32) | ((unsigned __int128)(((uint32_t)(v252 >>> 0x40X) - (uint32_t)(v253 >>> 0x40X)) * 0.38268343) << 64) | ((unsigned __int128)(((uint32_t)(v252 >>> 0x60X) - (uint32_t)(v253 >>> 0x60X)) * 0.38268343) << 96);
    __int128 v262 = (unsigned __int128)((uint32_t)v233 + (uint32_t)v257) | ((unsigned __int128)((uint32_t)(v233 >>> 0x20X) + (uint32_t)(v257 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v233 >>> 0x40X) + (uint32_t)(v257 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v233 >>> 0x60X) + (uint32_t)(v257 >>> 0x60X)) << 96);
    __int128 v263 = (unsigned __int128)((uint32_t)v233 - (uint32_t)v257) | ((unsigned __int128)((uint32_t)(v233 >>> 0x20X) - (uint32_t)(v257 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v233 >>> 0x40X) - (uint32_t)(v257 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v233 >>> 0x60X) - (uint32_t)(v257 >>> 0x60X)) << 96);
    *param3 = (unsigned __int128)((uint32_t)v251 + (uint32_t)v244) | ((unsigned __int128)((uint32_t)(v251 >>> 0x20X) + (uint32_t)(v244 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v251 >>> 0x40X) + (uint32_t)(v244 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v251 >>> 0x60X) + (uint32_t)(v244 >>> 0x60X)) << 96);
    *(param3 + 1) = v220;
    *(param3 + 7) = v219;
    *(param3 + 8) = (unsigned __int128)((uint32_t)v244 - (uint32_t)v251) | ((unsigned __int128)((uint32_t)(v244 >>> 0x20X) - (uint32_t)(v251 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v244 >>> 0x40X) - (uint32_t)(v251 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v244 >>> 0x60X) - (uint32_t)(v251 >>> 0x60X)) << 96);
    __int128 v264 = (unsigned __int128)((uint32_t)v249 * 0.5411961 + (uint32_t)v260) | ((unsigned __int128)((uint32_t)(v249 >>> 0x20X) * 0.5411961 + (uint32_t)(v260 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v249 >>> 0x40X) * 0.5411961 + (uint32_t)(v260 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v249 >>> 0x60X) * 0.5411961 + (uint32_t)(v260 >>> 0x60X)) << 96);
    __int128 v265 = (unsigned __int128)((uint32_t)v250 * 1.306563 + (uint32_t)v260) | ((unsigned __int128)((uint32_t)(v250 >>> 0x20X) * 1.306563 + (uint32_t)(v260 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v250 >>> 0x40X) * 1.306563 + (uint32_t)(v260 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v250 >>> 0x60X) * 1.306563 + (uint32_t)(v260 >>> 0x60X)) << 96);
    __int128 v266 = (unsigned __int128)((uint32_t)v252 * 0.5411961 + (uint32_t)v261) | ((unsigned __int128)((uint32_t)(v252 >>> 0x20X) * 0.5411961 + (uint32_t)(v261 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v252 >>> 0x40X) * 0.5411961 + (uint32_t)(v261 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v252 >>> 0x60X) * 0.5411961 + (uint32_t)(v261 >>> 0x60X)) << 96);
    __int128 v267 = (unsigned __int128)((uint32_t)v253 * 1.306563 + (uint32_t)v261) | ((unsigned __int128)((uint32_t)(v253 >>> 0x20X) * 1.306563 + (uint32_t)(v261 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v253 >>> 0x40X) * 1.306563 + (uint32_t)(v261 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v253 >>> 0x60X) * 1.306563 + (uint32_t)(v261 >>> 0x60X)) << 96);
    int* ptr0 = param1;
    long* ptr1 = param0;
    long v268 = 0L;
    *(param3 + 4) = (unsigned __int128)((uint32_t)v245 + (uint32_t)v259) | ((unsigned __int128)((uint32_t)(v245 >>> 0x20X) + (uint32_t)(v259 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v245 >>> 0x40X) + (uint32_t)(v259 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v245 >>> 0x60X) + (uint32_t)(v259 >>> 0x60X)) << 96);
    *(param3 + 5) = v222;
    int* ptr2 = param2;
    short* ptr3 = param7;
    *(param3 + 12) = (unsigned __int128)((uint32_t)v245 - (uint32_t)v259) | ((unsigned __int128)((uint32_t)(v245 >>> 0x20X) - (uint32_t)(v259 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v245 >>> 0x40X) - (uint32_t)(v259 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v245 >>> 0x60X) - (uint32_t)(v259 >>> 0x60X)) << 96);
    *(param3 + 13) = v229;
    *(param3 + 2) = (unsigned __int128)((uint32_t)v262 + (uint32_t)v267) | ((unsigned __int128)((uint32_t)(v262 >>> 0x20X) + (uint32_t)(v267 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v262 >>> 0x40X) + (uint32_t)(v267 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v262 >>> 0x60X) + (uint32_t)(v267 >>> 0x60X)) << 96);
    *(param3 + 3) = v221;
    *(param3 + 10) = (unsigned __int128)((uint32_t)v263 + (uint32_t)v266) | ((unsigned __int128)((uint32_t)(v263 >>> 0x20X) + (uint32_t)(v266 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v263 >>> 0x40X) + (uint32_t)(v266 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v263 >>> 0x60X) + (uint32_t)(v266 >>> 0x60X)) << 96);
    *(param3 + 11) = v227;
    *(param3 + 11) = (unsigned __int128)((uint32_t)v256 + (uint32_t)v264) | ((unsigned __int128)((uint32_t)(v256 >>> 0x20X) + (uint32_t)(v264 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v256 >>> 0x40X) + (uint32_t)(v264 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v256 >>> 0x60X) + (uint32_t)(v264 >>> 0x60X)) << 96);
    *(param3 + 6) = (unsigned __int128)((uint32_t)v263 - (uint32_t)v266) | ((unsigned __int128)((uint32_t)(v263 >>> 0x20X) - (uint32_t)(v266 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v263 >>> 0x40X) - (uint32_t)(v266 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v263 >>> 0x60X) - (uint32_t)(v266 >>> 0x60X)) << 96);
    *(param3 + 7) = (unsigned __int128)((uint32_t)v256 - (uint32_t)v264) | ((unsigned __int128)((uint32_t)(v256 >>> 0x20X) - (uint32_t)(v264 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v256 >>> 0x40X) - (uint32_t)(v264 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v256 >>> 0x60X) - (uint32_t)(v264 >>> 0x60X)) << 96);
    *(param3 + 3) = (unsigned __int128)((uint32_t)v255 + (uint32_t)v265) | ((unsigned __int128)((uint32_t)(v255 >>> 0x20X) + (uint32_t)(v265 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v255 >>> 0x40X) + (uint32_t)(v265 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v255 >>> 0x60X) + (uint32_t)(v265 >>> 0x60X)) << 96);
    *(param3 + 14) = (unsigned __int128)((uint32_t)v262 - (uint32_t)v267) | ((unsigned __int128)((uint32_t)(v262 >>> 0x20X) - (uint32_t)(v267 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v262 >>> 0x40X) - (uint32_t)(v267 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v262 >>> 0x60X) - (uint32_t)(v267 >>> 0x60X)) << 96);
    *(param3 + 0xF) = (unsigned __int128)((uint32_t)v255 - (uint32_t)v265) | ((unsigned __int128)((uint32_t)(v255 >>> 0x20X) - (uint32_t)(v265 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v255 >>> 0x40X) - (uint32_t)(v265 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v255 >>> 0x60X) - (uint32_t)(v265 >>> 0x60X)) << 96);
    *(param3 + 5) = (unsigned __int128)((uint32_t)v247 + (uint32_t)v258) | ((unsigned __int128)((uint32_t)(v247 >>> 0x20X) + (uint32_t)(v258 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v247 >>> 0x40X) + (uint32_t)(v258 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v247 >>> 0x60X) + (uint32_t)(v258 >>> 0x60X)) << 96);
    *(param3 + 9) = v226;
    *(param3 + 9) = (unsigned __int128)((uint32_t)v246 - (uint32_t)v248) | ((unsigned __int128)((uint32_t)(v246 >>> 0x20X) - (uint32_t)(v248 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v246 >>> 0x40X) - (uint32_t)(v248 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v246 >>> 0x60X) - (uint32_t)(v248 >>> 0x60X)) << 96);
    *(param3 + 13) = (unsigned __int128)((uint32_t)v247 - (uint32_t)v258) | ((unsigned __int128)((uint32_t)(v247 >>> 0x20X) - (uint32_t)(v258 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v247 >>> 0x40X) - (uint32_t)(v258 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v247 >>> 0x60X) - (uint32_t)(v258 >>> 0x60X)) << 96);
    *(param3 + 1) = (unsigned __int128)((uint32_t)v248 + (uint32_t)v246) | ((unsigned __int128)((uint32_t)(v248 >>> 0x20X) + (uint32_t)(v246 >>> 0x20X)) << 32) | ((unsigned __int128)((uint32_t)(v248 >>> 0x40X) + (uint32_t)(v246 >>> 0x40X)) << 64) | ((unsigned __int128)((uint32_t)(v248 >>> 0x60X) + (uint32_t)(v246 >>> 0x60X)) << 96);
    do {
        long v269 = v268 * 4L;
        long v270 = *(&gvar_478598 + v268);
        ++v268;
        float v271 = *(float*)((long)param3 + v269) * *(float*)(param4 + v269);
        *(int*)(v270 * 4L + (long)&v33) = (int)(v271 + (v271 < 0.0 ? -0.5: 0.5));
    }
    while(v268 != 64L);
    int* ptr4 = ptr0;
    uint32_t result = v33;
    int v272 = v33 - param5;
    if(param5 == v33) {
        int v273 = (uint32_t)*(param6 + 1) + *ptr2;
        v14 = ((uint32_t)*param6 << (24 - (uint8_t)(v273 & 0x1f))) | *ptr0;
        if(v273 < 8) {
            v13 = v273;
        }
        else {
            while(1) {
                long v274 = *ptr1;
                long v275 = *(ptr1 + 1);
                v12 = (uint8_t)(v14 >>> 16);
                v274(v275, (long)&v12, 1L);
                if((~v14 & 0xff0000) == 0) {
                    long v276 = *ptr1;
                    long v277 = *(ptr1 + 1);
                    v12 = 0;
                    v276(v277, (long)&v12, 1L);
                }
                v13 = v273 - 8;
                v11 = v273;
                v14 = v60 * 0x100;
                v273 = v13;
                if(v11 > 0xF) {
                    continue;
                }
                break;
            }
        }
    }
    else {
        long v278 = (uint64_t)((v272 >> 31) + v272);
        long v279 = (uint64_t)((v272 < 0 ? 0 - v272: v272) >>> 1);
        long v280 = (uint64_t)(33 - ((v279 >>> 31L) & 0x1L ? 0: (v279 >>> 30L) & 0x1L ? 1: (v279 >>> 29L) & 0x1L ? 2: (v279 >>> 28L) & 0x1L ? 3: (v279 >>> 27L) & 0x1L ? 4: (v279 >>> 26L) & 0x1L ? 5: (v279 >>> 25L) & 0x1L ? 6: (v279 >>> 24L) & 0x1L ? 7: (v279 >>> 23L) & 0x1L ? 8: (v279 >>> 22L) & 0x1L ? 9: (v279 >>> 21L) & 0x1L ? 10: (v279 >>> 20L) & 0x1L ? 11: (v279 >>> 19L) & 0x1L ? 12: (v279 >>> 18L) & 0x1L ? 13: (v279 >>> 17L) & 0x1L ? 14: (v279 >>> 16L) & 0x1L ? 0xF: (v279 >>> 15L) & 0x1L ? 16: (v279 >>> 14L) & 0x1L ? 17: (v279 >>> 13L) & 0x1L ? 18: (v279 >>> 12L) & 0x1L ? 19: (v279 >>> 11L) & 0x1L ? 20: (v279 >>> 10L) & 0x1L ? 21: (v279 >>> 9L) & 0x1L ? 22: (v279 >>> 8L) & 0x1L ? 23: (v279 >>> 7L) & 0x1L ? 24: (v279 >>> 6L) & 0x1L ? 25: (v279 >>> 5L) & 0x1L ? 26: (v279 >>> 4L) & 0x1L ? 27: (v279 >>> 3L) & 0x1L ? 28: (v279 >>> 2L) & 0x1L ? 29: (v279 >>> 1L) & 0x1L ? 30: v279 & 0x1L ? 31: 32));
        short* ptr5 = (short*)((uint64_t)(uint16_t)v280 * 4L + (long)param6);
        v10 = (uint32_t)*(ptr5 + 1);
        int v281 = (uint32_t)(uint16_t)v280;
        int v282 = (uint32_t)*(ptr5 + 1) + *ptr2;
        long v283 = (uint64_t)~(-1 << v280);
        int v284 = ((uint32_t)*ptr5 << (24 - (uint8_t)(v282 & 0x1f))) | *ptr0;
        if(v282 < 8) {
            v9 = v282;
        loc_BF9DB8:
            int v285 = v9 + v281;
            *ptr4 = v284;
            ptr0 = ptr4;
            *ptr2 = v9;
            v14 = ((uint32_t)((uint16_t)v283 & (uint16_t)v278) << (24 - (uint8_t)(v285 & 0x1f))) | *ptr0;
            if(v285 < 8) {
                v13 = v285;
            }
            else {
                do {
                    long v286 = *ptr1;
                    long v287 = *(ptr1 + 1);
                    v12 = (uint8_t)(v14 >>> 16);
                    v286(v287, (long)&v12, 1L);
                    if((~v14 & 0xff0000) == 0) {
                        long v288 = *ptr1;
                        long v289 = *(ptr1 + 1);
                        v12 = 0;
                        v288(v289, (long)&v12, 1L);
                    }
                    v13 = v285 - 8;
                    v11 = v285;
                    v14 = v60 * 0x100;
                    v285 = v13;
                }
                while(v11 > 0xF);
            }
        }
        else {
            do {
                long v290 = *ptr1;
                long v291 = *(ptr1 + 1);
                v12 = (uint8_t)(v284 >>> 16);
                v290(v291, (long)&v12, 1L);
                if((~v284 & 0xff0000) == 0) {
                    long v292 = *ptr1;
                    long v293 = *(ptr1 + 1);
                    v12 = 0;
                    v292(v293, (long)&v12, 1L);
                }
                v9 = v282 - 8;
                v11 = v282;
                v284 = v41 * 0x100;
                v282 = v9;
            }
            while(v11 > 0xF);
            goto loc_BF9DB8;
        }
    }
    *ptr0 = v14;
    *ptr2 = v13;
    if(v37 != 0) {
        v8 = 63;
        v7 = 1;
        goto loc_BFA4E4;
    }
    else if(v43 != 0) {
        v8 = 62;
        v7 = 0;
        goto loc_BFA4E4;
    }
    else if(v47 != 0) {
        v7 = 0;
        v8 = 61;
        goto loc_BFA4E4;
    }
    else if(v52 != 0) {
        v7 = 0;
        v8 = 60;
        goto loc_BFA4E4;
    }
    else if(v56 != 0) {
        v7 = 0;
        v8 = 59;
        goto loc_BFA4E4;
    }
    else if(v62 != 0) {
        v7 = 0;
        v8 = 58;
        goto loc_BFA4E4;
    }
    else if(v66 != 0) {
        v7 = 0;
        v8 = 57;
        goto loc_BFA4E4;
    }
    else if(v71 != 0) {
        v7 = 0;
        v8 = 56;
        goto loc_BFA4E4;
    }
    else if(v75 != 0) {
        v7 = 0;
        v8 = 55;
        goto loc_BFA4E4;
    }
    else if(v80 != 0) {
        v7 = 0;
        v8 = 54;
        goto loc_BFA4E4;
    }
    else if(v84 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 53;
        goto loc_BFA4E4;
    }
    else if(v15 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 52;
        goto loc_BFA4E4;
    }
    else if(v19 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 51;
        goto loc_BFA4E4;
    }
    else if(v24 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 50;
        goto loc_BFA4E4;
    }
    else if(v28 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 49;
        goto loc_BFA4E4;
    }
    else if(v34 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 48;
        goto loc_BFA4E4;
    }
    else if(v38 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 47;
        goto loc_BFA4E4;
    }
    else if(v44 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 46;
        goto loc_BFA4E4;
    }
    else if(v48 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 45;
        goto loc_BFA4E4;
    }
    else if(v53 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 44;
        goto loc_BFA4E4;
    }
    else if(v57 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 43;
        goto loc_BFA4E4;
    }
    else if(v63 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 42;
        goto loc_BFA4E4;
    }
    else if(v67 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 41;
        goto loc_BFA4E4;
    }
    else if(v72 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 40;
        goto loc_BFA4E4;
    }
    else if(v76 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 39;
        goto loc_BFA4E4;
    }
    else if(v81 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 38;
        goto loc_BFA4E4;
    }
    else if(v85 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 37;
        goto loc_BFA4E4;
    }
    else if(v16 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 36;
        goto loc_BFA4E4;
    }
    else if(v20 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 35;
        goto loc_BFA4E4;
    }
    else if(v25 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 34;
        goto loc_BFA4E4;
    }
    else if(v29 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 33;
        goto loc_BFA4E4;
    }
    else if(v35 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 32;
        goto loc_BFA4E4;
    }
    else if(v39 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 31;
        goto loc_BFA4E4;
    }
    else if(v45 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 30;
        goto loc_BFA4E4;
    }
    else if(v49 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 29;
        goto loc_BFA4E4;
    }
    else if(v54 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 28;
        goto loc_BFA4E4;
    }
    else if(v58 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 27;
        goto loc_BFA4E4;
    }
    else if(v64 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 26;
        goto loc_BFA4E4;
    }
    else if(v68 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 25;
        goto loc_BFA4E4;
    }
    else if(v73 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 24;
        goto loc_BFA4E4;
    }
    else if(v77 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 23;
        goto loc_BFA4E4;
    }
    else if(v82 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 22;
        goto loc_BFA4E4;
    }
    else if(v86 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 21;
        goto loc_BFA4E4;
    }
    else if(v17 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 20;
        goto loc_BFA4E4;
    }
    else if(v21 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 19;
        goto loc_BFA4E4;
    }
    else if(v26 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 18;
        goto loc_BFA4E4;
    }
    else if(v30 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 17;
        goto loc_BFA4E4;
    }
    else if(v36 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 16;
        goto loc_BFA4E4;
    }
    else if(v40 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 15;
        goto loc_BFA4E4;
    }
    else if(v46 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 14;
        goto loc_BFA4E4;
    }
    else if(v50 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 13;
        goto loc_BFA4E4;
    }
    else if(v55 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 12;
        goto loc_BFA4E4;
    }
    else if(v59 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 11;
        goto loc_BFA4E4;
    }
    else if(v65 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 10;
        goto loc_BFA4E4;
    }
    else if(v69 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 9;
        goto loc_BFA4E4;
    }
    else if(v74 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 8;
        goto loc_BFA4E4;
    }
    else if(v78 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 7;
        goto loc_BFA4E4;
    }
    else if(v83 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 6;
        goto loc_BFA4E4;
    }
    else if(v87 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 5;
        goto loc_BFA4E4;
    }
    else if(v18 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 4;
        goto loc_BFA4E4;
    }
    else if(v22 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 3;
        goto loc_BFA4E4;
    }
    else if(v27 != 0) {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 2;
        goto loc_BFA4E4;
    }
    else if(v31 == 0) {
        v1 = v13 + v101;
        v0 = (v102 << (24 - (uint8_t)(v1 & 0x1f))) | *ptr4;
        ptr0 = ptr4;
        if(v1 >= 8) {
            do {
                long v294 = *ptr1;
                long v295 = *(ptr1 + 1);
                v12 = (uint8_t)(v0 >>> 16);
                v294(v295, (long)&v12, 1L);
                if((~v0 & 0xff0000) == 0) {
                    long v296 = *ptr1;
                    long v297 = *(ptr1 + 1);
                    v12 = 0;
                    v296(v297, (long)&v12, 1L);
                }
                v13 = v1 - 8;
                v11 = v1;
                v0 = v79 * 0x100;
                v1 = v13;
            }
            while(v11 > 0xF);
        }
        else {
            v13 = v1;
        }
        *ptr0 = v0;
        *ptr2 = v13;
    }
    else {
        ptr0 = ptr4;
        v7 = 0;
        v8 = 1;
    loc_BFA4E4:
        long v298 = v8;
        long v299 = 1L;
        do {
            long v300 = (long)(uint32_t)v299;
            do {
                v6 = *(int*)(v300 * 4L + (long)&v33);
                v299 = v300 + 1L;
                v5 = v70 + 1;
                if(v300 > v298) {
                    break;
                }
                v300 = v299;
            }
            while(v6 == 0);
            if(v5 >= 16) {
                int v301 = v5 >>> 4;
                int v302 = 1;
                do {
                    int v303 = v13 + v124;
                    int v304 = (v113 << (24 - (uint8_t)(v303 & 0x1f))) | *ptr0;
                    if(v303 < 8) {
                        v13 = v303;
                    }
                    else {
                        do {
                            long v305 = *ptr1;
                            long v306 = *(ptr1 + 1);
                            v12 = (uint8_t)(v304 >>> 16);
                            v305(v306, (long)&v12, 1L);
                            if((~v304 & 0xff0000) == 0) {
                                long v307 = *ptr1;
                                long v308 = *(ptr1 + 1);
                                v12 = 0;
                                v307(v308, (long)&v12, 1L);
                            }
                            v13 = v303 - 8;
                            v4 = v303;
                            v304 = v61 * 0x100;
                            v303 = v13;
                        }
                        while(v4 > 0xF);
                    }
                    ptr0 = ptr4;
                    v11 = v302;
                    v302 = v23 + 1;
                    *ptr0 = v304;
                    *ptr2 = v13;
                }
                while(v301 != v11);
                v5 = v70 & 0xF;
            }
            long v309 = (uint64_t)((v6 < 0 ? 0 - v6: v6) >>> 1);
            long v310 = (v309 >>> 31L) & 0x1L ? 0L: (v309 >>> 30L) & 0x1L ? 1L: (v309 >>> 29L) & 0x1L ? 2L: (v309 >>> 28L) & 0x1L ? 3L: (v309 >>> 27L) & 0x1L ? 4L: (v309 >>> 26L) & 0x1L ? 5L: (v309 >>> 25L) & 0x1L ? 6L: (v309 >>> 24L) & 0x1L ? 7L: (v309 >>> 23L) & 0x1L ? 8L: (v309 >>> 22L) & 0x1L ? 9L: (v309 >>> 21L) & 0x1L ? 10L: (v309 >>> 20L) & 0x1L ? 11L: (v309 >>> 19L) & 0x1L ? 12L: (v309 >>> 18L) & 0x1L ? 13L: (v309 >>> 17L) & 0x1L ? 14L: (v309 >>> 16L) & 0x1L ? 15L: (v309 >>> 15L) & 0x1L ? 16L: (v309 >>> 14L) & 0x1L ? 17L: (v309 >>> 13L) & 0x1L ? 18L: (v309 >>> 12L) & 0x1L ? 19L: (v309 >>> 11L) & 0x1L ? 20L: (v309 >>> 10L) & 0x1L ? 21L: (v309 >>> 9L) & 0x1L ? 22L: (v309 >>> 8L) & 0x1L ? 23L: (v309 >>> 7L) & 0x1L ? 24L: (v309 >>> 6L) & 0x1L ? 25L: (v309 >>> 5L) & 0x1L ? 26L: (v309 >>> 4L) & 0x1L ? 27L: (v309 >>> 3L) & 0x1L ? 28L: (v309 >>> 2L) & 0x1L ? 29L: (v309 >>> 1L) & 0x1L ? 30L: v309 & 0x1L ? 31L: 32L;
            int v311 = 33 - (uint32_t)v310;
            short* ptr6 = (short*)((long)(33 - (uint32_t)v310 + v5 * 16) * 4L + (long)ptr3);
            int v312 = (uint32_t)*(ptr6 + 1) + v13;
            long v313 = (uint64_t)~(-1 << v311);
            int v314 = ((uint32_t)*ptr6 << (24 - (uint8_t)(v312 & 0x1f))) | *ptr0;
            if(v312 < 8) {
                v3 = v312;
            }
            else {
                do {
                    long v315 = *ptr1;
                    long v316 = *(ptr1 + 1);
                    v12 = (uint8_t)(v314 >>> 16);
                    v315(v316, (long)&v12, 1L);
                    if((~v314 & 0xff0000) == 0) {
                        long v317 = *ptr1;
                        long v318 = *(ptr1 + 1);
                        v12 = 0;
                        v317(v318, (long)&v12, 1L);
                    }
                    v3 = v312 - 8;
                    v11 = v312;
                    v314 = v32 * 0x100;
                    v312 = v3;
                }
                while(v11 > 0xF);
            }
            ptr0 = ptr4;
            *ptr0 = v314;
            *ptr2 = v3;
            v13 = v3 + v311;
            v10 = (uint32_t)v299 - 1;
            int v319 = ((uint32_t)(((uint16_t)(v6 >> 31) + (uint16_t)v6) & (uint16_t)v313) << (24 - (uint8_t)(v13 & 0x1f))) | *ptr0;
            if(v13 >= 8) {
                int v320 = v10;
                do {
                    long v321 = *ptr1;
                    long v322 = *(ptr1 + 1);
                    v12 = (uint8_t)(v319 >>> 16);
                    v321(v322, (long)&v12, 1L);
                    if((~v319 & 0xff0000) == 0) {
                        long v323 = *ptr1;
                        long v324 = *(ptr1 + 1);
                        v12 = 0;
                        v323(v324, (long)&v12, 1L);
                    }
                    v2 = v42 - 8;
                    v319 = v51 * 0x100;
                }
                while(v2 > 0xF);
                v13 = v2 - 8;
                v10 = v320;
            }
            *ptr0 = v319;
            *ptr2 = v13;
        }
        while((uint32_t)v298 > v10);
        if(v7 & 1) {
            return result;
        }
        v1 = v13 + v101;
        v0 = (v102 << (24 - (uint8_t)(v1 & 0x1f))) | *ptr0;
        if(v1 < 8) {
            v13 = v1;
        }
        else {
            do {
                long v325 = *ptr1;
                long v326 = *(ptr1 + 1);
                v12 = (uint8_t)(v0 >>> 16);
                v325(v326, (long)&v12, 1L);
                if((~v0 & 0xff0000) == 0) {
                    long v327 = *ptr1;
                    long v328 = *(ptr1 + 1);
                    v12 = 0;
                    v327(v328, (long)&v12, 1L);
                }
                v13 = v1 - 8;
                v11 = v1;
                v0 = v79 * 0x100;
                v1 = v13;
            }
            while(v11 > 0xF);
        }
        *ptr0 = v0;
        *ptr2 = v13;
    }
    return result;
}
