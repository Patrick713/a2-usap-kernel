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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d26f33a, "__pm_runtime_idle" },
	{ 0x6d242ca0, "lbs_resume" },
	{ 0xed86c547, "sdio_writesb" },
	{ 0xf838b7d, "sdio_enable_func" },
	{ 0x9f66006b, "sdio_claim_irq" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc1c27485, "lbs_stop_card" },
	{ 0xccae089c, "__pm_runtime_resume" },
	{ 0x21d918c5, "netdev_alert" },
	{ 0x6518dd4c, "__lbs_cmd" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe60c5ed4, "sdio_get_host_pm_caps" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x3fadce7a, "lbs_start_card" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5ec6ffff, "lbs_queue_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa37e8780, "lbs_get_firmware_async" },
	{ 0x9d8dbf3b, "lbs_cmd_copyback" },
	{ 0xef0ca702, "lbs_suspend" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8a5cda92, "sdio_readsb" },
	{ 0x736fe891, "sdio_unregister_driver" },
	{ 0xb3867cb9, "lbs_remove_card" },
	{ 0xae6eb95a, "sdio_f0_writeb" },
	{ 0xb752e3bf, "sdio_set_host_pm_flags" },
	{ 0x2a02c94, "lbs_process_rxed_packet" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x9b6e1194, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0a4ab76, "lbs_host_to_card_done" },
	{ 0x1000e51, "schedule" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x1ac33ee5, "sdio_align_size" },
	{ 0xa4906a91, "lbs_add_card" },
	{ 0x22c829f, "sdio_f0_readb" },
	{ 0xc4fe9077, "mmc_add_host" },
	{ 0x2404021a, "netdev_err" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xd6a6db20, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x52ad51ee, "sdio_register_driver" },
	{ 0x93f1763e, "sdio_claim_host" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa983b633, "sdio_set_block_size" },
	{ 0xb1532c54, "sdio_disable_func" },
	{ 0xc5833887, "sdio_release_host" },
	{ 0x9e8f6ec0, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "574DD96A90F004DBC84B465");
