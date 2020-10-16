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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x3b917bbf, "complete_and_exit" },
	{ 0x52b6a509, "send_sig" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xf88db2a2, "usb_kill_urb" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xf9e956fe, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3f2916e5, "atm_charge" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5b849523, "vcc_release_async" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x65465214, "skb_trim" },
	{ 0x718ae3f2, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xe3ea52a2, "usb_string" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x6f148145, "atm_dev_register" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0x305d8a65, "usb_submit_urb" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xd6cf68f9, "usb_get_dev" },
	{ 0x822bd109, "usb_put_dev" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x76466d28, "atm_dev_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x943dc8aa, "crc32_be" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe6c12171, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0x184a7893, "usb_free_urb" },
	{ 0x9f49ab55, "usb_alloc_urb" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "D8EACBA47E67EFCB360A879");
