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
	{ 0x6339eaf6, "netdev_info" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6cc9f910, "lbs_host_sleep_cfg" },
	{ 0x6d242ca0, "lbs_resume" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc1c27485, "lbs_stop_card" },
	{ 0x6518dd4c, "__lbs_cmd" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x3fadce7a, "lbs_start_card" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x183c8383, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x5ec6ffff, "lbs_queue_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x635ddc55, "lbs_send_tx_feedback" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa37e8780, "lbs_get_firmware_async" },
	{ 0x9d8dbf3b, "lbs_cmd_copyback" },
	{ 0xef0ca702, "lbs_suspend" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb3867cb9, "lbs_remove_card" },
	{ 0x2a02c94, "lbs_process_rxed_packet" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaebeda32, "usb_reset_device" },
	{ 0xa0a4ab76, "lbs_host_to_card_done" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xa4906a91, "lbs_add_card" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x9f49ab55, "usb_alloc_urb" },
	{ 0x9e8f6ec0, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "810C90B705B65653ECF1F68");
