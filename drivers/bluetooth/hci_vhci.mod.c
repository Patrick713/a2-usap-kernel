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
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0xa0337a7f, "no_llseek" },
	{ 0x9ec748a7, "misc_deregister" },
	{ 0xa07281f, "misc_register" },
	{ 0xee946877, "hci_recv_frame" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xe16c6b8b, "_copy_from_iter_full" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x937c4867, "hci_register_dev" },
	{ 0xfaf119af, "hci_alloc_dev" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4199fd5c, "skb_queue_head" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xaec4df8e, "nonseekable_open" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0xf68b0045, "skb_push" },
	{ 0x37a0cba, "kfree" },
	{ 0xcb560b41, "hci_free_dev" },
	{ 0xc68ddd29, "hci_unregister_dev" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x2d9ecd4c, "skb_queue_purge" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "190B54CC3BC7791EF1FEA69");
