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
	{ 0x1283af75, "sdio_writeb" },
	{ 0xf761c533, "sdio_readb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x9120c6d6, "mwifiex_cancel_hs" },
	{ 0xed86c547, "sdio_writesb" },
	{ 0xf838b7d, "sdio_enable_func" },
	{ 0x9f66006b, "sdio_claim_irq" },
	{ 0xcc837226, "mmc_hw_reset" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x1754e0b, "mwifiex_disable_auto_ds" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0xd6c76938, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0xdb19dbe5, "mwifiex_main_process" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x215dbc51, "mwifiex_prepare_fw_dump_info" },
	{ 0xe60c5ed4, "sdio_get_host_pm_caps" },
	{ 0x65465214, "skb_trim" },
	{ 0x754f348a, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x23d6428d, "_mwifiex_dbg" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x5f754e5a, "memset" },
	{ 0x9705b368, "mwifiex_add_card" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x42aca429, "of_match_node" },
	{ 0x7ac86063, "mwifiex_shutdown_sw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0x8a5cda92, "sdio_readsb" },
	{ 0x736fe891, "sdio_unregister_driver" },
	{ 0xb752e3bf, "sdio_set_host_pm_flags" },
	{ 0x586cfab0, "mwifiex_dnld_fw" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9b6e1194, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x22c829f, "sdio_f0_readb" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe8fd28a7, "mwifiex_reinit_sw" },
	{ 0xc9298595, "mwifiex_handle_rx_packet" },
	{ 0x57812b7b, "mwifiex_deauthenticate_all" },
	{ 0x626a61e9, "mwifiex_remove_card" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x732720c7, "mwifiex_enable_hs" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe823c573, "mwifiex_upload_device_dump" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x52ad51ee, "sdio_register_driver" },
	{ 0x93f1763e, "sdio_claim_host" },
	{ 0x5c43218c, "mwifiex_drv_info_dump" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x9876e4c3, "mwifiex_init_shutdown_fw" },
	{ 0xa983b633, "sdio_set_block_size" },
	{ 0xb1532c54, "sdio_disable_func" },
	{ 0xc5833887, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9145*");
MODULE_ALIAS("sdio:c*v02DFd9149*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "030FE635D47F281F649D9C2");
