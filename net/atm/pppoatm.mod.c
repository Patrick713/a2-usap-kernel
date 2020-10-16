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
	{ 0x106b221c, "deregister_atm_ioctl" },
	{ 0x62e183b8, "register_atm_ioctl" },
	{ 0xf68b0045, "skb_push" },
	{ 0xa46a0f7a, "consume_skb" },
	{ 0x54fbd86c, "skb_realloc_headroom" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf876035a, "vcc_process_recv_queue" },
	{ 0xb66bc471, "__module_get" },
	{ 0x53f20e4b, "ppp_register_channel" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x95dbe078, "__get_user_2" },
	{ 0xd05976b1, "ppp_channel_index" },
	{ 0x91c4dbfc, "ppp_unit_number" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd7a36d7f, "ppp_output_wakeup" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x12b548f6, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x7661f8c0, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0x71c90087, "memcmp" },
	{ 0xa5e5cb9d, "ppp_input_error" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x48b7c34, "ppp_input" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "atm,ppp_generic");


MODULE_INFO(srcversion, "DBB03B60EB8633699EE38B5");
