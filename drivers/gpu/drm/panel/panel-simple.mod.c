#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0xe0036949, "mipi_dsi_driver_unregister" },
	{ 0xb9574a84, "mipi_dsi_driver_register_full" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x67b83f59, "regulator_enable" },
	{ 0x9707c938, "mipi_dsi_detach" },
	{ 0x7238966a, "regulator_disable" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7cd5bd21, "drm_panel_remove" },
	{ 0xbf9d79db, "mipi_dsi_attach" },
	{ 0x42aca429, "of_match_node" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xe1d6d0c9, "drm_panel_add" },
	{ 0x6cb51f67, "drm_panel_init" },
	{ 0xeed31dd5, "of_get_display_timing" },
	{ 0xb64b2b5b, "of_find_i2c_adapter_by_node" },
	{ 0xfeb02014, "of_node_put" },
	{ 0xe3860e69, "of_find_backlight_by_node" },
	{ 0x889e7573, "of_parse_phandle" },
	{ 0x62182082, "devm_gpiod_get_optional" },
	{ 0xc3251622, "devm_regulator_get" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xec55cbce, "drm_display_mode_from_videomode" },
	{ 0xb903ca4, "drm_mode_create" },
	{ 0xa1d8004a, "videomode_from_timing" },
	{ 0xaf6cea1d, "drm_display_info_set_bus_formats" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x12be653a, "drm_mode_probed_add" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0xc30bb8d9, "drm_mode_duplicate" },
	{ 0x37a0cba, "kfree" },
	{ 0xce4f30b0, "drm_add_edid_modes" },
	{ 0xc45fa8e6, "drm_connector_update_edid_property" },
	{ 0x11d20888, "drm_get_edid" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "drm,backlight");

MODULE_ALIAS("of:N*T*Cauo,b080uan01");
MODULE_ALIAS("of:N*T*Cauo,b080uan01C*");
MODULE_ALIAS("of:N*T*Cboe,tv080wum-nl0");
MODULE_ALIAS("of:N*T*Cboe,tv080wum-nl0C*");
MODULE_ALIAS("of:N*T*Clg,ld070wx3-sl01");
MODULE_ALIAS("of:N*T*Clg,ld070wx3-sl01C*");
MODULE_ALIAS("of:N*T*Clg,lh500wx1-sd03");
MODULE_ALIAS("of:N*T*Clg,lh500wx1-sd03C*");
MODULE_ALIAS("of:N*T*Cpanasonic,vvx10f004b00");
MODULE_ALIAS("of:N*T*Cpanasonic,vvx10f004b00C*");
MODULE_ALIAS("of:N*T*Clg,acx467akm-7");
MODULE_ALIAS("of:N*T*Clg,acx467akm-7C*");
MODULE_ALIAS("of:N*T*Cosddisplays,osd101t2045-53ts");
MODULE_ALIAS("of:N*T*Cosddisplays,osd101t2045-53tsC*");
MODULE_ALIAS("of:N*T*Campire,am-480272h3tmqw-t01h");
MODULE_ALIAS("of:N*T*Campire,am-480272h3tmqw-t01hC*");
MODULE_ALIAS("of:N*T*Campire,am800480r3tmqwa1h");
MODULE_ALIAS("of:N*T*Campire,am800480r3tmqwa1hC*");
MODULE_ALIAS("of:N*T*Carm,rtsm-display");
MODULE_ALIAS("of:N*T*Carm,rtsm-displayC*");
MODULE_ALIAS("of:N*T*Carmadeus,st0700-adapt");
MODULE_ALIAS("of:N*T*Carmadeus,st0700-adaptC*");
MODULE_ALIAS("of:N*T*Cauo,b101aw03");
MODULE_ALIAS("of:N*T*Cauo,b101aw03C*");
MODULE_ALIAS("of:N*T*Cauo,b101ean01");
MODULE_ALIAS("of:N*T*Cauo,b101ean01C*");
MODULE_ALIAS("of:N*T*Cauo,b101xtn01");
MODULE_ALIAS("of:N*T*Cauo,b101xtn01C*");
MODULE_ALIAS("of:N*T*Cauo,b116xw03");
MODULE_ALIAS("of:N*T*Cauo,b116xw03C*");
MODULE_ALIAS("of:N*T*Cauo,b133htn01");
MODULE_ALIAS("of:N*T*Cauo,b133htn01C*");
MODULE_ALIAS("of:N*T*Cauo,b133xtn01");
MODULE_ALIAS("of:N*T*Cauo,b133xtn01C*");
MODULE_ALIAS("of:N*T*Cauo,g070vvn01");
MODULE_ALIAS("of:N*T*Cauo,g070vvn01C*");
MODULE_ALIAS("of:N*T*Cauo,g101evn010");
MODULE_ALIAS("of:N*T*Cauo,g101evn010C*");
MODULE_ALIAS("of:N*T*Cauo,g104sn02");
MODULE_ALIAS("of:N*T*Cauo,g104sn02C*");
MODULE_ALIAS("of:N*T*Cauo,g133han01");
MODULE_ALIAS("of:N*T*Cauo,g133han01C*");
MODULE_ALIAS("of:N*T*Cauo,g185han01");
MODULE_ALIAS("of:N*T*Cauo,g185han01C*");
MODULE_ALIAS("of:N*T*Cauo,p320hvn03");
MODULE_ALIAS("of:N*T*Cauo,p320hvn03C*");
MODULE_ALIAS("of:N*T*Cauo,t215hvn01");
MODULE_ALIAS("of:N*T*Cauo,t215hvn01C*");
MODULE_ALIAS("of:N*T*Cavic,tm070ddh03");
MODULE_ALIAS("of:N*T*Cavic,tm070ddh03C*");
MODULE_ALIAS("of:N*T*Cbananapi,s070wv20-ct16");
MODULE_ALIAS("of:N*T*Cbananapi,s070wv20-ct16C*");
MODULE_ALIAS("of:N*T*Cboe,hv070wsa-100");
MODULE_ALIAS("of:N*T*Cboe,hv070wsa-100C*");
MODULE_ALIAS("of:N*T*Cboe,nv101wxmn51");
MODULE_ALIAS("of:N*T*Cboe,nv101wxmn51C*");
MODULE_ALIAS("of:N*T*Ccdtech,s043wq26h-ct7");
MODULE_ALIAS("of:N*T*Ccdtech,s043wq26h-ct7C*");
MODULE_ALIAS("of:N*T*Ccdtech,s070wv95-ct16");
MODULE_ALIAS("of:N*T*Ccdtech,s070wv95-ct16C*");
MODULE_ALIAS("of:N*T*Cchunghwa,claa070wp03xg");
MODULE_ALIAS("of:N*T*Cchunghwa,claa070wp03xgC*");
MODULE_ALIAS("of:N*T*Cchunghwa,claa101wa01a");
MODULE_ALIAS("of:N*T*Cchunghwa,claa101wa01aC*");
MODULE_ALIAS("of:N*T*Cchunghwa,claa101wb01");
MODULE_ALIAS("of:N*T*Cchunghwa,claa101wb01C*");
MODULE_ALIAS("of:N*T*Cdataimage,scf0700c48ggu18");
MODULE_ALIAS("of:N*T*Cdataimage,scf0700c48ggu18C*");
MODULE_ALIAS("of:N*T*Cdlc,dlc0700yzg-1");
MODULE_ALIAS("of:N*T*Cdlc,dlc0700yzg-1C*");
MODULE_ALIAS("of:N*T*Cdlc,dlc1010gig");
MODULE_ALIAS("of:N*T*Cdlc,dlc1010gigC*");
MODULE_ALIAS("of:N*T*Cedt,et035012dm6");
MODULE_ALIAS("of:N*T*Cedt,et035012dm6C*");
MODULE_ALIAS("of:N*T*Cedt,etm0430g0dh6");
MODULE_ALIAS("of:N*T*Cedt,etm0430g0dh6C*");
MODULE_ALIAS("of:N*T*Cedt,et057090dhu");
MODULE_ALIAS("of:N*T*Cedt,et057090dhuC*");
MODULE_ALIAS("of:N*T*Cedt,et070080dh6");
MODULE_ALIAS("of:N*T*Cedt,et070080dh6C*");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0dh6");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0dh6C*");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0bdh6");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0bdh6C*");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0edh6");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0edh6C*");
MODULE_ALIAS("of:N*T*Cevervision,vgg804821");
MODULE_ALIAS("of:N*T*Cevervision,vgg804821C*");
MODULE_ALIAS("of:N*T*Cfoxlink,fl500wvr00-a0t");
MODULE_ALIAS("of:N*T*Cfoxlink,fl500wvr00-a0tC*");
MODULE_ALIAS("of:N*T*Cfriendlyarm,hd702e");
MODULE_ALIAS("of:N*T*Cfriendlyarm,hd702eC*");
MODULE_ALIAS("of:N*T*Cgiantplus,gpg482739qs5");
MODULE_ALIAS("of:N*T*Cgiantplus,gpg482739qs5C*");
MODULE_ALIAS("of:N*T*Cgiantplus,gpm940b0");
MODULE_ALIAS("of:N*T*Cgiantplus,gpm940b0C*");
MODULE_ALIAS("of:N*T*Channstar,hsd070pww1");
MODULE_ALIAS("of:N*T*Channstar,hsd070pww1C*");
MODULE_ALIAS("of:N*T*Channstar,hsd100pxn1");
MODULE_ALIAS("of:N*T*Channstar,hsd100pxn1C*");
MODULE_ALIAS("of:N*T*Chit,tx23d38vm0caa");
MODULE_ALIAS("of:N*T*Chit,tx23d38vm0caaC*");
MODULE_ALIAS("of:N*T*Cinnolux,at043tn24");
MODULE_ALIAS("of:N*T*Cinnolux,at043tn24C*");
MODULE_ALIAS("of:N*T*Cinnolux,at070tn92");
MODULE_ALIAS("of:N*T*Cinnolux,at070tn92C*");
MODULE_ALIAS("of:N*T*Cinnolux,g070y2-l01");
MODULE_ALIAS("of:N*T*Cinnolux,g070y2-l01C*");
MODULE_ALIAS("of:N*T*Cinnolux,g101ice-l01");
MODULE_ALIAS("of:N*T*Cinnolux,g101ice-l01C*");
MODULE_ALIAS("of:N*T*Cinnolux,g121i1-l01");
MODULE_ALIAS("of:N*T*Cinnolux,g121i1-l01C*");
MODULE_ALIAS("of:N*T*Cinnolux,g121x1-l03");
MODULE_ALIAS("of:N*T*Cinnolux,g121x1-l03C*");
MODULE_ALIAS("of:N*T*Cinnolux,n116bge");
MODULE_ALIAS("of:N*T*Cinnolux,n116bgeC*");
MODULE_ALIAS("of:N*T*Cinnolux,n156bge-l21");
MODULE_ALIAS("of:N*T*Cinnolux,n156bge-l21C*");
MODULE_ALIAS("of:N*T*Cinnolux,p120zdg-bf1");
MODULE_ALIAS("of:N*T*Cinnolux,p120zdg-bf1C*");
MODULE_ALIAS("of:N*T*Cinnolux,zj070na-01p");
MODULE_ALIAS("of:N*T*Cinnolux,zj070na-01pC*");
MODULE_ALIAS("of:N*T*Ckoe,tx14d24vm1bpa");
MODULE_ALIAS("of:N*T*Ckoe,tx14d24vm1bpaC*");
MODULE_ALIAS("of:N*T*Ckoe,tx31d200vm0baa");
MODULE_ALIAS("of:N*T*Ckoe,tx31d200vm0baaC*");
MODULE_ALIAS("of:N*T*Ckyo,tcg121xglp");
MODULE_ALIAS("of:N*T*Ckyo,tcg121xglpC*");
MODULE_ALIAS("of:N*T*Clemaker,bl035-rgb-002");
MODULE_ALIAS("of:N*T*Clemaker,bl035-rgb-002C*");
MODULE_ALIAS("of:N*T*Clg,lb070wv8");
MODULE_ALIAS("of:N*T*Clg,lb070wv8C*");
MODULE_ALIAS("of:N*T*Clg,lp079qx1-sp0v");
MODULE_ALIAS("of:N*T*Clg,lp079qx1-sp0vC*");
MODULE_ALIAS("of:N*T*Clg,lp097qx1-spa1");
MODULE_ALIAS("of:N*T*Clg,lp097qx1-spa1C*");
MODULE_ALIAS("of:N*T*Clg,lp120up1");
MODULE_ALIAS("of:N*T*Clg,lp120up1C*");
MODULE_ALIAS("of:N*T*Clg,lp129qe");
MODULE_ALIAS("of:N*T*Clg,lp129qeC*");
MODULE_ALIAS("of:N*T*Clogicpd,type28");
MODULE_ALIAS("of:N*T*Clogicpd,type28C*");
MODULE_ALIAS("of:N*T*Cmitsubishi,aa070mc01-ca1");
MODULE_ALIAS("of:N*T*Cmitsubishi,aa070mc01-ca1C*");
MODULE_ALIAS("of:N*T*Cnec,nl12880bc20-05");
MODULE_ALIAS("of:N*T*Cnec,nl12880bc20-05C*");
MODULE_ALIAS("of:N*T*Cnec,nl4827hc19-05b");
MODULE_ALIAS("of:N*T*Cnec,nl4827hc19-05bC*");
MODULE_ALIAS("of:N*T*Cnetron-dy,e231732");
MODULE_ALIAS("of:N*T*Cnetron-dy,e231732C*");
MODULE_ALIAS("of:N*T*Cnewhaven,nhd-4.3-480272ef-atxl");
MODULE_ALIAS("of:N*T*Cnewhaven,nhd-4.3-480272ef-atxlC*");
MODULE_ALIAS("of:N*T*Cnlt,nl192108ac18-02d");
MODULE_ALIAS("of:N*T*Cnlt,nl192108ac18-02dC*");
MODULE_ALIAS("of:N*T*Cnvd,9128");
MODULE_ALIAS("of:N*T*Cnvd,9128C*");
MODULE_ALIAS("of:N*T*Cokaya,rs800480t-7x0gp");
MODULE_ALIAS("of:N*T*Cokaya,rs800480t-7x0gpC*");
MODULE_ALIAS("of:N*T*Colimex,lcd-olinuxino-43-ts");
MODULE_ALIAS("of:N*T*Colimex,lcd-olinuxino-43-tsC*");
MODULE_ALIAS("of:N*T*Contat,yx700wv03");
MODULE_ALIAS("of:N*T*Contat,yx700wv03C*");
MODULE_ALIAS("of:N*T*Cortustech,com37h3m05dtc");
MODULE_ALIAS("of:N*T*Cortustech,com37h3m05dtcC*");
MODULE_ALIAS("of:N*T*Cortustech,com37h3m99dtc");
MODULE_ALIAS("of:N*T*Cortustech,com37h3m99dtcC*");
MODULE_ALIAS("of:N*T*Cortustech,com43h4m85ulc");
MODULE_ALIAS("of:N*T*Cortustech,com43h4m85ulcC*");
MODULE_ALIAS("of:N*T*Cosddisplays,osd070t1718-19ts");
MODULE_ALIAS("of:N*T*Cosddisplays,osd070t1718-19tsC*");
MODULE_ALIAS("of:N*T*Cpda,91-00156-a0");
MODULE_ALIAS("of:N*T*Cpda,91-00156-a0C*");
MODULE_ALIAS("of:N*T*Cqiaodian,qd43003c0-40");
MODULE_ALIAS("of:N*T*Cqiaodian,qd43003c0-40C*");
MODULE_ALIAS("of:N*T*Crocktech,rk070er9427");
MODULE_ALIAS("of:N*T*Crocktech,rk070er9427C*");
MODULE_ALIAS("of:N*T*Csamsung,lsn122dl01-c01");
MODULE_ALIAS("of:N*T*Csamsung,lsn122dl01-c01C*");
MODULE_ALIAS("of:N*T*Csamsung,ltn101nt05");
MODULE_ALIAS("of:N*T*Csamsung,ltn101nt05C*");
MODULE_ALIAS("of:N*T*Csamsung,ltn140at29-301");
MODULE_ALIAS("of:N*T*Csamsung,ltn140at29-301C*");
MODULE_ALIAS("of:N*T*Csharp,ld-d5116z01b");
MODULE_ALIAS("of:N*T*Csharp,ld-d5116z01bC*");
MODULE_ALIAS("of:N*T*Csharp,lq035q7db03");
MODULE_ALIAS("of:N*T*Csharp,lq035q7db03C*");
MODULE_ALIAS("of:N*T*Csharp,lq070y3dg3b");
MODULE_ALIAS("of:N*T*Csharp,lq070y3dg3bC*");
MODULE_ALIAS("of:N*T*Csharp,lq101k1ly04");
MODULE_ALIAS("of:N*T*Csharp,lq101k1ly04C*");
MODULE_ALIAS("of:N*T*Csharp,lq123p1jx31");
MODULE_ALIAS("of:N*T*Csharp,lq123p1jx31C*");
MODULE_ALIAS("of:N*T*Csharp,lq150x1lg11");
MODULE_ALIAS("of:N*T*Csharp,lq150x1lg11C*");
MODULE_ALIAS("of:N*T*Csharp,ls020b1dd01d");
MODULE_ALIAS("of:N*T*Csharp,ls020b1dd01dC*");
MODULE_ALIAS("of:N*T*Cshelly,sca07010-bfn-lnn");
MODULE_ALIAS("of:N*T*Cshelly,sca07010-bfn-lnnC*");
MODULE_ALIAS("of:N*T*Cstarry,kr122ea0sra");
MODULE_ALIAS("of:N*T*Cstarry,kr122ea0sraC*");
MODULE_ALIAS("of:N*T*Ctfc,s9700rtwv43tr-01b");
MODULE_ALIAS("of:N*T*Ctfc,s9700rtwv43tr-01bC*");
MODULE_ALIAS("of:N*T*Ctianma,tm070jdhg30");
MODULE_ALIAS("of:N*T*Ctianma,tm070jdhg30C*");
MODULE_ALIAS("of:N*T*Ctianma,tm070rvhg71");
MODULE_ALIAS("of:N*T*Ctianma,tm070rvhg71C*");
MODULE_ALIAS("of:N*T*Cti,nspire-cx-lcd-panel");
MODULE_ALIAS("of:N*T*Cti,nspire-cx-lcd-panelC*");
MODULE_ALIAS("of:N*T*Cti,nspire-classic-lcd-panel");
MODULE_ALIAS("of:N*T*Cti,nspire-classic-lcd-panelC*");
MODULE_ALIAS("of:N*T*Ctoshiba,lt089ac29000");
MODULE_ALIAS("of:N*T*Ctoshiba,lt089ac29000C*");
MODULE_ALIAS("of:N*T*Ctpk,f07a-0102");
MODULE_ALIAS("of:N*T*Ctpk,f07a-0102C*");
MODULE_ALIAS("of:N*T*Ctpk,f10a-0102");
MODULE_ALIAS("of:N*T*Ctpk,f10a-0102C*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-tC*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-1t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-1tC*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-7t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-7tC*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-11t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-11tC*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-19t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-19tC*");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-20t");
MODULE_ALIAS("of:N*T*Curt,umsh-8596md-20tC*");
MODULE_ALIAS("of:N*T*Cvxt,vl050-8048nt-c01");
MODULE_ALIAS("of:N*T*Cvxt,vl050-8048nt-c01C*");
MODULE_ALIAS("of:N*T*Cwinstar,wf35ltiacd");
MODULE_ALIAS("of:N*T*Cwinstar,wf35ltiacdC*");

MODULE_INFO(srcversion, "3FA759FDCEF3105AF015B79");
